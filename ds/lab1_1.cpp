#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int a[10],i,j,c;
	int n;
	cout<<"Enter the limit of array: "<<endl;
	cin>>n;
	cout<<"Enter the element of array: ";
	for ( i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	cout<<"Prime number in array are: "<<endl;
	for(i=0;i<n;i++)
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
			cout<<a[i]<<endl;
		}
	}
	return 0;
}