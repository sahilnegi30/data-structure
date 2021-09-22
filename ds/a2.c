#include<stdio.h>
 
int main() 
{
    int a[100],i,n,pos;
    printf("NAME: PRERNA RAWAT_L\n");
    printf("\nEnter no of elements\n");    
    scanf("%d",&n);
    
    printf("Enter the elements\n");
    for (i=0;i<n;i++) 
    {
        scanf("%d",&a[i]);
    }
 
    printf("Enter the positon to delete\n");
    scanf("%d",&pos);
    for(i=pos;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;
    printf("\nOn Deletion, new array we get is\n");
    for(i=0;i<n;i++) 
    {
        printf("a[%d] = %d\n",i,a[i]);
    }
    return 0;
}
