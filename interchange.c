#include <stdio.h>
int main()
{
    int a, b, c;
    a = 10;
    b = 20;
    c = b;
    b = a;
    a = c;
    printf("%d %d", a, b);
    return 0;
}