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
    // char test1='A';
    // char test2='Z';
    // char test3='a';
    // char test4='z';

    string input = get_string("Give me a string\n");
    int length = strlen(input);
    char output[length + 1];

    for(int i=0; input[i]!='\0'; i++){
        if(islower(input[i])){

            output[i]=input[i]+argv[1];
            if(output[i]>'z'){
               output[i]=char('a'+output[i]-'z')
            }

        }
        if(isupper(input[i])){
            output[i]=char(input[i]+int(argv[1]));
            if(output[i]>'Z'){
               output[i]=char('A'+output[i]-'A')
            }
        }
        if(isspace(input[i])){
            output[i]=input[i];
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
