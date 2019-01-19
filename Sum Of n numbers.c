#include<stdio.h>
int add(int n);
int main()
{
    int n;
    printf("Enter Nth Number: ");
    scanf("%d",&n);
    printf("Sum of 1 to %d = %d",n,add(n));
    return 0;
}
int add(int n)
{
    if(n!=0)
     return n+add(n-1);  /* recursive call */
}

