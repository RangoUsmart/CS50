#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int typeofarg(char string[]) {
    for (int i = 0; string[i] != '\0'; i++) {
        if ((string[i] <= 'z' && string[i] >= 'a') || (string[i] <= 'Z' && string[i] >= 'A')) {
            continue; // Продовжити перевірку наступного символу у рядку
        } else {
            printf("Usage: ./vigenere keyword\n");
            return 1;
        }
    }
    return 0; // Якщо всі символи у рядку - це букви, повертаємо 0
}

int main(int argc, char *argv[]) {

    string input = get_string("Give me a string:");
    typeofarg(input);
    int length = strlen(input);
    char output[length + 1];
    printf("ciphertext: %s\n", output);
    return 0;
}
