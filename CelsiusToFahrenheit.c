#include <stdio.h>
int main(){
    int celsius;
    float fahrenheit;
    printf("Enter Celsius:");
    scanf("%d",&celsius);
    fahrenheit=(float)(celsius*9)/5+32;
    printf("Fahrenheit =%.1f",fahrenheit);
    return 0;
}