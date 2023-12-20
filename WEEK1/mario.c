#include <stdio.h>
#include <cs50.h>

int main(){
    int number= get_int("Give me a number\n");
    char ch = '#';
    if (number >= 1 && number <= 8){
        for (int y = 0; y < number; y++) {
            if(y <= number){
                int p = number-y;
                for (int i = 1; i < p; i++) {
                    printf("%s", " ");
                }
            }
            for (int x = 0; x <= y; x++) {
                    printf("%c", ch);
                }
           
            printf("%s", "\n");
            // puts("\n");
        }
        return 0;
    }else
    {
        puts("your number is incorect");
        return main();
    }
}
