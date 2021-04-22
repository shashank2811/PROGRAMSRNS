#include <stdio.h>
#include<math.h>
int isprime(int num)
{
    int flag=1;
    for(int i=2;i<=sqrt(num);i++)
    {
        if ((num%i)==0)
            {
                flag=0;
                return flag;
            }
        flag=1;
    }
    
    return flag;
}
int main()
{
    int num,prime;
    printf("enter a number \t");
    scanf("%d", &num);
    printf("The prime factors of the number are\n");
    for(int i=2;i<=num;i++)
    {
        if((num%i)==0)
        {
            prime=isprime(i);
            if(prime==1)
               printf("%d\t", i);
        }
    }
    return 0;
}