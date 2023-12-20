#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int typeofarg(char string[]) {
    for (int i = 0; string[i] != '\0'; i++) {
        if ((string[i] <= 'z' && string[i] >= 'a') || (string[i] <= 'Z' && string[i] >= 'A')) {
            continue;
        } else {
            printf("Usage: ./vigenere keyword\n");
            return 1;
        }
    }
    return 0;
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
    char output[length + 1];
    int key[length]

    for(int i=0; input[i]!='\0'; i++){
        key[i]=getkey()
        // printf("%d\n",getkey(input[i]));
        }
    }




    // for(int i=0; input[i]!='\0'; i++){
    //     if(input[i]<='z'&&input[i]>='a'){
    //         output[i]='a'+(input[i]-'a'+shift)%26;
    //     }
    //     else if(input[i]<='Z'&&input[i]>='A'){
    //         output[i]=input[i]+shift;
    //         output[i]='A'+(input[i]-'A'+shift)%26;
    //     }
    //     else{
    //         output[i]=input[i];
    //     }
    // }
    // output[length] = '\0';
    // printf("ciphertext: %s\n", output);
    // return 0;
// }
