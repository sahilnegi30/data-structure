#include<iostream> 
using namespace std; 
    vector<int> sortArrayByParityII(vector<int>& A) {
        int n =A.size();
        int j=1;
         for (int i = 0; i < n; i += 2)
            if (A[i] % 2 == 1) {
                while (A[j] % 2 == 1)
                    j += 2;
                swap(A[i],A[j]); 
            }

        return A;
    }
int main() 
{ 
 vector<int> arr = {1,2,3,4}; 
  vector<int>ans=sortArrayByParityII(arr); 
 for(int i=0;i<arr.size();i++)
 cout<<ans[i]<<" ";
 cout<<endl;
 return 0;
}