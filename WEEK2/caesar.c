#include <stdio.h>
#include <cs50.h>
#include <stdlib.h> 

int main(int argc, int argv[]) {
    string name = get_string("Give me a string?\n");
    printf("Hello, %s!\n your key is %i", name, argv[1]);
    return 0;
}
