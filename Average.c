#include <stdio.h>
int main(){
    int a,b,c, average;
    printf("Enter three Number:");
    scanf("%d %d %d",&a,&b,&c);
    average=(a+b+c)/3;
    printf("Average is %d",average);
    return 0;
}