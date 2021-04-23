#include <stdio.h>
int main()
{
    int a[10],b[10],i,key,j=0;
    printf("Enter the elements of the array:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the key element to be searched:\n");
    scanf ("%d",&key);
    for(i=0;i<10;i++)
        if(a[i]==key)
          b[j++]=i;
    if(j!=0)
    {
        printf("Search Successfull\n");
        printf("The first occuracne of the key is = %d\n",b[0]+1);
        j--;
        printf("The last occuracne of the key is = %d\n",b[j]+1);
    }
    else
       printf ("Search Failure\n");
    return 0;
}