#include<iostream>
using namespace std;
int main()
{
	int n,arr[n];
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		int temp;
		for(int j=i+1;j<n;j++)
		{
			if (arr[i]<[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"largest element in array"<<arr[0];
	cout
	return 0;
}