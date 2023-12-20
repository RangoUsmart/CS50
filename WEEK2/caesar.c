#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) {

    if (argc != 2) {
        printf("Usage: %s <integer>\n", argv[0]);
        return 1;
    }
    int shift = atoi(argv[1]); // Конвертація рядка у число

    // char test1='A';
    // char test2='Z';
    // char test3='a';
    // char test4='z';

    string input = get_string("Give me a string\n");
    int length = strlen(input);
    char output[length + 1];

    for(int i=0; input[i]!='\0'; i++){
        if(input[i]<='z'&&input[i]>='a'){
            printf("%d \n", input[i]);
            printf("%d \n", shift);
            output[i]=input[i]+shift;
            printf("%d \n", output[i]);
            if(output[i]>'z'){
                output[i]='a'+output[i]-'z'-1;
            }
        }
        if(input[i]<='Z'&&input[i]>='A'){
            // printf("%d \n", input[i]);
            // printf("%d \n", shift);
            output[i]=input[i]+shift;
            // printf("%d \n", output[i]);
            if(output[i]>'Z'){
                output[i]='A'+output[i]-'Z'-1;
            }
        }
        else{
            output[i]=input[i];
        }
        // printf("%c__%d \n", name[i], name[i]);
        // printf("%c__%c \n",test1, test2);
        // printf("%d__%d \n",test1, test2);
        // printf("%c__%c \n",test3, test4);
        // printf("%d__%d \n",test3, test4);
    }
    printf("ciphertext: %s \n", output);
    return 0;
}
