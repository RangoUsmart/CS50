#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int typeofarg(char string[]) {
    for (int i = 1; argv[i] != NULL; i++) { // Починаємо з індексу 1, бо argv[0] - це назва програми

            if ((argv[i][j] <= 'z' && argv[i][j] >= 'a') || (argv[i][j] <= 'Z' && argv[i][j] >= 'A')) {
                continue; // Продовжити перевірку наступного символу у цьому аргументі
            } else {
                printf("Usage: %s <integer>\n", argv[0]);
                return 1;
            }
    }
    return 0; // Якщо всі символи у всіх аргументах - це букви, повертаємо 0
}

int main(int argc, char *argv[]) {

    string input = get_string("Give me a string:");
    typeofarg(input);
    int length = strlen(input);
    char output[length + 1];
    printf("ciphertext: %s\n", output);
    return 0;
}
