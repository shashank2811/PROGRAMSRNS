#include <stdio.h>
int main()
{
    int num,rem,i=0;
    printf("\nEnter the number\n");
    scanf("%d",&num);
    int a[8];
    printf("The given number is: %d \n", num);
    while(num!=0)
    {
        rem=num%2;
        a[i++]=rem;
        num=num/2;
    }
   printf("The binary equivalent is: ");
   for(i=i-1;i>=0;i--)
        printf("%d", a[i]);
    return 0;
}