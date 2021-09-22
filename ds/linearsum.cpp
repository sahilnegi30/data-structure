#include<iostream>
using namespace std;
int main()
{
    int n,i,arr[n],sum=0;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }4
    for(i=0;i<n;i++)
    {
   sum+=arr[i];
    cout<<sum<<" ";
    arr[i]=sum;
    }
return 0;
}