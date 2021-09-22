#include<stdio.h>
#include <stdlib.h>
void reverse(int *a,int n)
{
	for(int i=0;i<n/2;i++)
	{
		int temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
	}
}
void display(int *a,int n)
{
	for(int i=0;i<n;i++)
		printf("%d\t",a[i]);
}
void read_array(int *a, int n)
{
	printf("Enter the element of array:\n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
}
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int *a=(int *)malloc(sizeof(int));
	read_array(a,n);
	reverse(a,n);
	printf("Reverse array is:\n");
	display(a,n);
	return 0;
}