#include <stdio.h>  
int main()
{
    int num, count, repeat=0;
    printf("Enter the size of array: \n");
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)
        scanf("%d",&arr[i]);
    
    for(int i=0;i<num;i++)
    {
        count = 1;
        for(int j=i+1;j<num;j++)
        {
            if(arr[i]!=-1)
            {
                if(arr[i]==arr[j])
                    {
                        count++;
                        arr[j]=-1;
                    }

            }
        }
        if(count>1)
        {
            repeat++;
            if(repeat==3)
            {   
                printf("\n %d is the third repeating element: ", arr[i]);
                break;
            }
        }
    }
    return 0;
    }