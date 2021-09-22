#include<stdio.h>
#include<math.h>
int GetArmstrong(int num);
int main()
{
 int i,k=0,n,flagArm=0,lenArm;
 printf("Enter number of elements in an array\n");
 scanf("%d",&n);
 int a[n],armstrong[n];
 printf("Enter numbers\n");
 for(i=0;i<n;i++)
 {
  flagArm=0;
  scanf("%d",&a[i]);
  flagArm=GetArmstrong(a[i]);
  if(flagArm==1)
  {
   armstrong[k]=a[i];
   k++;
  }
  
 }
 lenArm=k;
 printf("Number of armstrongs in array=%d\n",lenArm);
 if(lenArm!=0){
 printf("Armstrong numbers in array are:\n");
    for(i=0;i<lenArm;i++)
    {
     printf("%d\n",armstrong[i]);
    }
   }
   return 0;
}
int GetArmstrong(int num)
{
   int i,temp,sum=0;
   int x;
   temp=num;
   while(num>0)
   {
      x++;
      num/=10;
   }
   num=temp;
   while(num>0)
   {
     i=num%10;
     sum+=pow(i,x);
     num=num/10;
    }
   if(sum==temp)
     return sum;
     else
      return 0;
}

