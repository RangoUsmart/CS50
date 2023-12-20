#include <stdio.h>
#include <cs50.h>

void block(int count, char symb) {
    for (int x = 0; x < count; x++) {
        printf("%c", symb);
    }
}

int main() {
    int number = get_int("Give me a number\n");
    char ch = '#';
    
    if (number >= 1 && number <= 8) {
        for (int y = 0; y < number; y++) {
            int p = number - y;
            
            for (int i = 1; i < p; i++) {
                printf("%s", " ");
            }
            
            block(y + 1, ch);
            printf("%s", "  ");
            block(y + 1, ch);
            printf("%s", "\n");
        }
        
        return 0;
    } else {
        puts("your number is incorrect");
        return main();
    }
}