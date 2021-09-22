#include<stdio.h>
#include<stdlib.h>
void segregate0and1(int *a, int n)
{
	int left = 0, right = n-1;
	while (left < right)
	{
		while (a[left] == 0 && left < right)
			left++;
		while (a[right] == 1 && left < right)
			right--;
		if (left < right)
		{
			a[left] = 0;
			a[right] = 1;
			left++;
			right--;
		}
	}
}
void read_array(int *a, int n)
{
	printf("Enter the element of array:\n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
}
int main()
{
	int *a=(int *)malloc(sizeof(int));
	int i,n;
	printf("Enter the limit of array:\n");
	scanf("%d",&n);
	read_array(a,n);
	segregate0and1(a,n);
	printf("Array after segregation ");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	getchar();
	return 0;
}
