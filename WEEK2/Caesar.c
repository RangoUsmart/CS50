#include <stdio.h>
#include <cs50.h>

int main(char) {
    string name = get_string("Give me a string?\n");
    printf("Hello, %s!\n", name);
    return 0;
}
