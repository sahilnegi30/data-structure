#include <stdio.h>
int main()
{
    int n;
     printf("NAME: PRERNA RAWAT_L\n");
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the array elements :");
    int a[n];                    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)         
    {
        int temp;
        for(int j=i+1; j<n ;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The largest element is %d\n",a[0]);
    printf("The smallest element is %d\n",a[n-1]);   
    printf("The second smallest element is %d\n",a[n-2]);   
    printf("The second largest element is %d",a[1]);      
    return 0;
}