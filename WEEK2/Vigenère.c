#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void typeofarg(char *argv[]){
    for(int i=0; argv[i]!='\0'; i++){
        if(input[i]<='z'&&input[i]>='a'||input[i]<='Z'&&input[i]>='A'){
            output[i]='a'+(input[i]-'a'+shift)%26;
        }
    }
}
int main(int argc, char *argv[]) {

    if (argc != 2) {
        printf("Usage: %s <integer>\n", argv[0]);
        return 1;
    }
    else if()
    int shift = atoi(argv[1]);
    string input = get_string("Give me a string:");
    int length = strlen(input);
    char output[length + 1];

    for(int i=0; input[i]!='\0'; i++){
        if(input[i]<='z'&&input[i]>='a'){
            output[i]='a'+(input[i]-'a'+shift)%26;
        }
        else if(input[i]<='Z'&&input[i]>='A'){
            output[i]=input[i]+shift;
            output[i]='A'+(input[i]-'A'+shift)%26;
        }
        else{
            output[i]=input[i];
        }
    }
    output[length] = '\0';
    printf("ciphertext: %s\n", output);
    return 0;
}
