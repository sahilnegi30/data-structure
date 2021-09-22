#include<iostream>
using namespace std;
void swap(int *x,int*y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
void bubblesort(int *a,int n)
{
	for(int i=0;i<n-1;i++)
		for(int j=0;j<n-i-1;j++)
			if(a[j]>a[j+1])
				swap(&a[j],&a[j+1]);
}
void display(int *a,int n)
{
	cout<<"sorted array:\n";
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}
void read_array(int *a,int n)
{
	for(int i=0;i<n;i++)
		cin>>a[i];
}
int main()
{
	cout<<"Enter the limit of array:\n";
	int *a=(int *)malloc(sizeof(int));
	int n;
	cin>>n;
	read_array(a,n);
	bubblesort(a,n);
	display(a,n);
	return 0;
}
