// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dictionary.h"

// Represents number of buckets in a hash table
#define N 26

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// Represents a hash table
node *hashtable[N];

// Hashes word to a number between 0 and 25, inclusive, based on its first letter
unsigned int hash(const char *word)
{
    return tolower(word[0]) - 'a';
}

// Loads dictionary into memory, returning true if successful else false
bool load(const char *dictionary)
{
    // Initialize hash table
    for (int i = 0; i < N; i++)
    {
        hashtable[i] = NULL;
    }

    // Open dictionary
    FILE *file = fopen(dictionary, "r");
    if (file == NULL)
    {
        unload();
        return false;
    }

    // Buffer for a word
    char word[LENGTH + 1];

    // Insert words into hash table
    while (fscanf(file, "%s", word) != EOF)
    {
        node *new_node = malloc(sizeof(node));
        if (new_node == NULL)
        {
            fclose(file);
            return false;
        }

        strcpy(new_node->word, word);
        new_node->next = NULL;

        unsigned int index = hash(word);

        if (hashtable[index] == NULL)
        {
            hashtable[index] = new_node;
        }
        else
        {
            new_node->next = hashtable[index];
            hashtable[index] = new_node;
        }
        // TODO
    }

    // Close dictionary
    fclose(file);

    // Indicate success
    return true;
}

// Returns number of words in dictionary if loaded else 0 if not yet loaded
unsigned int size(void)
{
    unsigned int word_count = 0;
    for (int i = 0; i < N; i++)
    {
        node *cursor = hashtable[i];
        while (cursor != NULL)
        {
            word_count++;
            cursor = cursor->next;
        }
    }

    return word_count;
}

// Returns true if word is in dictionary else false
bool check(const char *word)
{
    // Convert the word to lowercase for case-insensitive comparison
    char lowercase_word[LENGTH + 1];
    for (int i = 0; word[i]; i++)
    {
        lowercase_word[i] = tolower(word[i]);
    }
    lowercase_word[strlen(word)] = '\0'; // Add the null terminator

    unsigned int index = hash(lowercase_word); // Use the lowercase word for hashing

    node *cursor = hashtable[index];
    while (cursor != NULL)
    {
        if (strcmp(cursor->word, lowercase_word) == 0)
        {
            return true;
        }
        cursor = cursor->next;
    }

    return false;
}

// Unloads dictionary from memory, returning true if successful else false
bool unload(void)
{
    for (int i = 0; i < N; i++)
    {
        node *cursor = hashtable[i];
        while (cursor != NULL)
        {
            node *temp = cursor;
            cursor = cursor->next;
            free(temp);
        }
    }
    return true;
}
