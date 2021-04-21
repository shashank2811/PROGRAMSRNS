#include<stdio.h>
int main()
{
    int num,n,i,count;
    printf("\nEnter the value of n\n");
    scanf("%d",&n);
    for(num=1;num<=n;num++)
    {
        count = 0;
        for(i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {
                count++;
                break;
            }
        }
        if(count==0 && num!=1)
          printf("\t%d\t",num);
    }
    return 0;
}