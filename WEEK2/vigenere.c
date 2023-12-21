#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int typeofarg(char string[]) {
    for (int i = 0; string[i] != '\0'; i++) {
        if ((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z')) {
            printf("_%c\n", string[i]);
        } else {
            printf("Usage: ./vigenere keyword\n");
            return 1; // Повертаємо 1, оскільки знайдено символ, який не є літерою
        }
    }
    return 0; // Повертаємо 0, якщо всі символи - літери
}

int getkey(char onechar) {
    return onechar - 'a';
}

int main(int argc, char *argv[]) {

    string input = get_string("Give me a string:");

    if (argc != 2) {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }

    typeofarg(argv[1]);


    int length = strlen(input);
    int key_length = strlen(argv[1]);
    char output[length + 1];

    int key[length];

    //  for (int i = 0; i<key_length; i++) {
    //     printf("_%s\n", argv[1]);
    // }

    for(int i=0; input[i]!='\0'; i++){
        key[i]=getkey(argv[1][i%key_length]);
        // printf("%d \n",getkey(input[i]));
        }

    // for (int i = 0; i < length; i++) {
    //     printf("_%d ", key[i]);
    // }

    for(int i=0; input[i]!='\0'; i++){
        if(input[i]<='z'&&input[i]>='a'){
            output[i]='a'+(input[i]-'a'+key[i])%26;
        }
        else if(input[i]<='Z'&&input[i]>='A'){
            output[i]=input[i]+key[i];
            output[i]='A'+(input[i]-'A'+key[i])%26;
        }
        else{
            output[i]=input[i];
        }
    }
    output[length] = '\0';
    printf("ciphertext: %s\n", output);
    return 0;
}
