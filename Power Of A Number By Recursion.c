#include <stdio.h>
int power(int n1,int n2);
int main()
{
    int base, e;
    printf("Enter base number: ");
    scanf("%d",&base);
    printf("Enter power number(positive integer): ");
    scanf("%d",&e);
    printf("%d^%d = %d", base, e, power(base, e));
    return 0;
}
int power(int base,int e)
{
    if ( e!=1 )
        return (base*power(base,e-1));
}
