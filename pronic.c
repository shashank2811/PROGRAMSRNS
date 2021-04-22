#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
   int flag=0,i;
   for(i=0;i<=num;i++)
   {
       if(i*(i+1)==num)
       {
           flag=1;
           break;
       }
   }

   if(flag==1)
    printf("It is a Pronic Number.");
   else
    printf("It is not a Pronic Number.");
}