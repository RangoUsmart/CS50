#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int  countnumbers(long numb){
    int count = 0;
    while (numb != 0) {
        numb /= 10;
        count++;
    }
    return count;
}
void massivattack(long number, int count, int *digits) {
    long temp = number;
    int index = 0;
    while (temp != 0 && index < count) {
        digits[index] = temp % 10;
        temp /= 10;
        index++;
    }
}

int main(){
    long number= get_long("Number: ");
    int count=countnumbers(number);
    // printf("Number: %ld\n", number);

    if (count>13 && count<17){
            int result[count];
            int firststep=0;
            int secondstep=0;
            massivattack(number, count, result);
            // printf("Number: %ld", number);

            for (int i = 1; i < count; i+=2) {
                if(result[i]*2<10){
                    firststep+=result[i]*2;
                    // printf("%d \n", firststep);
                }else{
                    firststep+=1;
                    firststep+=result[i]*2-10;
                }
            }

            for (int i = 0; i < count; i+=2) {
                secondstep+=result[i];
            }
            int summa=secondstep+firststep;
            float resrigt=summa%10;
            char str1[20];
            char str2[20];

            // Перетворення чисел у рядковий формат
            sprintf(str1, "%d", result[count-1]);
            sprintf(str2, "%d", result[count-2]);

            // Об'єднання рядків
            strcat(str1, str2);
            int combinedNumber = atoi(str1);
            if(resrigt==0){
                if(combinedNumber==34||combinedNumber==35||combinedNumber==37)
                {
                    printf("AMEX\n");
                }
                if(result[count-1]==4)
                {
                    printf("VISA\n");
                }
                if(combinedNumber==54||combinedNumber==55||combinedNumber==51)
                {
                    printf("MASTERCARD\n");
                }
                else
                {
                    printf("INVALID\n");
                }
            }
            else
                {
                    printf("INVALID\n");
                }
            // printf("\nЦифри: %ld\n, Кількість %d\n, Валідація %d\n", number, count, summa);
            // 1234567890123456
    }
    else
    {
        printf("INVALID\n");
        // return main();
    }
}

