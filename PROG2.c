#include<stdio.h>
void push(int a,int *s,int *top)
{
    (*top)++;
    s[*top]=a;
}
int main()
{
    int n,s[50],top=-1;
    printf("\nEnter the number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        push(n%10,s,&top);
        n=n/10;
    }
    while(top!=-1)
    {
        printf("%d\n",s[top--]);
    }
    return 0;
}