#include <stdio.h>
#include <stdlib.h>
void main()
{
	int i,n,a[20],large,pos;
	printf("enter the elements of the array\n");
    	for(int i=0;i<n;i++)
        	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i+1]>a[i])
		{
			large=a[i];
			pos=i;
			break;
		}	
	}
	printf("the largest element is %d",&large);
	i=pos;
	printf("elements before largest");	
	while(i>=0)
	{
		printf("%d ",a[i]);
		i--;
	}
	printf("elements after largest");
	i=pos;
	while(i<n)
	{
		printf("%d ",a[i]);
		i++;
	}
}