#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <integer>\n", argv[0]);
        return 1;
    }
    
    string name = get_string("Give me a string?\n");
    printf("Hello, %s!\n your key is %s\n ", name, argv[1]);
    return 0;
}
