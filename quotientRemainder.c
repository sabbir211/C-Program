#include <stdio.h>
int main(){
    int a,b,quotient;
    int remainder;
    printf("Enter two number:");
    scanf("%d %d",&a,&b);
    quotient=a/b;
    remainder=a%b;
    printf("Quotient is %d and remainder is %d ",quotient,remainder);
    return 0;
}