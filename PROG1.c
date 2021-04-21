#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n ");
    scanf("%d",&n);
    while(n!=0)
    {
        int d=n%10;
        n=n/10;
        printf("%d\n",d);
    }
    return 0;
}