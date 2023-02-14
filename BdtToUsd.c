#include <stdio.h>
int main(){
    int bdt,usd;
    float remainingBdt;
    printf("Enter BDT:");
    scanf("%d",&bdt);
    usd=bdt/77;
    remainingBdt=bdt%77;
    printf("%d dollar %.2f Tk",usd,remainingBdt);
    return 0;
}