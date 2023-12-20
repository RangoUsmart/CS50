#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(){
    // кількість проходів
    int count=0;
    // варіанти здачі
    int numbers[4];
    numbers[0] = 25;
    numbers[1] = 10;
    numbers[2] = 5;
    numbers[3] = 1;
    // Отримання числа
    float number= get_float("Give me a cheap\n");
    // float part=number-(int)number;
    int partown=(int)round(number * 100);
    if (number >0){
        for (int i = 0; i < 4; i++) {
            while(partown>=numbers[i]){
                        partown=partown-numbers[i];
                        count++;
                        printf("cheap: %d\n", numbers[i]);
            }
        }
        printf("Number of coins: %d\n", count);
        return 0;
        }
    else
    {
        puts("your number is incorect");
        return main();
    }
}

