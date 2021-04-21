#include<stdio.h>
int main()
{
    int n,num;
    printf("\nEnter the number\n");
    scanf("%d",&num);
    n=num;
    printf("\nEven numbers:\n");
    while(n!=0)
    {
        if(!((n%10)%2))
        {
            printf("%d\n",n%10);
            n=n/10;
        }
        else
        {
            n=n/10;
        }
    }
    printf("\nOdd numbers:\n");
    n=num;
    while(n!=0)
    {
        if(((n%10)%2))
        {
            printf("%d\n",n%10);
            n=n/10;
        }
        else
        {
            n=n/10;
        }
    }
    return 0;
}