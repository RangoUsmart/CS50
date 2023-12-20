#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <integer>\n", argv[0]);
        return 1;
    }

    string name = get_string("Give me a string?\n");
    for(int i; name[i]!='\0'; i++)
        printf("%s__%d", name[i], name[i]);
    return 0;
}
