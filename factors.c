#include <stdio.h>
int main()
{
    int num;
    printf("enter a number\t ");
    scanf("%d", &num);
    printf("The factors of the number are\n");
    for(int i=2;i<=num;i++)
    {
        if((num%i)==0)
        {
            printf("%d\t", i);
        }
    }
    return 0;
}