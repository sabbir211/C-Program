#include <stdio.h>
int main(){
    int a,b,c;
    float average;
    printf("Enter three Number:");
    scanf("%d %d %d",&a,&b,&c);
    average=(float)(a+b+c)/3;
    printf("Average is %f",average);
    return 0;
}