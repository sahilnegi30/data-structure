#include<stdio.h>
#include<math.h>
int count(int n)
{
  int len=0;
  while(n>0)
  {
    len++;
    n/=10;
  }
  return len;
}
int power(int n,int size)
{
  int rem,sum=0;
  while(n>0)
  {
    rem=n%10;
    sum+=pow(rem,size);
    n/=10;
  }
  return sum;
}
int isarmstrong(int size,int num)
{
  return power(num,size)==num;
}
 int main(int argc, char const *argv[])
{
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    int size=count(a[i]);
    if(isarmstrong(size,a[i]))
      printf("%d is an armstrong number in array\n",a[i]);
    else
      printf("%d is not an armstrong number in array\n",a[i]);
  }
  return 0;
}