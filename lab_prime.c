#include<stdio.h>
int main()
{
	int n,c,i,j;
	int a[10];
	printf("Enter the limit of array\n");
	scanf("%d",&n);
	printf("Enter the element of array: \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("prime no.s are:\n");
	for( i=0;i<n;i++)
	{
		j=2;
		c=1;
		while(j<a[i])
		{
			if(a[i]%j==0)
			{
				c=0;
				break;
			}
			j++;
		}
	
		if(c==1)
		{
			printf("%d ",a[i]);
		}
	}
	return 0;
}