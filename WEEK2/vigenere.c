#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int typeofarg(char *argv[]){
    for(int i=0; argv[i]!='\0'; i++){
        if(input[i]<='z'&&input[i]>='a'||input[i]<='Z'&&input[i]>='A'){
             return 0;
        }else{
            printf("Usage: %s <integer>\n", argv[0]);
            return 1;
        }
    }
}
int main(int argc, char *argv[]) {

    string input = get_string("Give me a string:");
    typeofarg(input);
    int length = strlen(input);
    char output[length + 1];
    printf("ciphertext: %s\n", output);
    return 0;
}
