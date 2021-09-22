#include<stdio.h>
int GetPalindrome(int num);
int main()
{
 int i,j=0,n,flagPalin=0,lenPalin;
 printf("Enter number of elements in an array\n");
 scanf("%d",&n);
 int a[n],palindrome[n];
 printf("Enter numbers\n");
 for(i=0;i<n;i++)
 {
  flagPalin=0;
  scanf("%d",&a[i]);
  flagPalin=GetPalindrome(a[i]);
  if(flagPalin==1)
  {
   palindrome[j]=a[i];
   j++;
  }
 }
 lenPalin=j;
 printf("Number of Palindromes in array=%d\n",lenPalin);
   if(lenPalin!=0)
   {
    printf("Palindrome numbers in array are:\n");
     for(i=0;i<lenPalin;i++)
     {
     printf("%d\n",palindrome[i]);
     }
     
   }
   return 0;
}

int GetPalindrome(int num)
{
 int dummy,rev=0,x;
    dummy=num;
    while(num>0)
    {
       x=num%10;
       rev=rev*10+x;
       num=num/10;
    }
     if(dummy==rev)
       return 1;
     else
      return 0;
}