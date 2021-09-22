#include<iostream>
#include<math.h>
using namespace std;

int main() {

    int x;
    cin>>x;

    int z = sqrt(x);

    if (z < 2) 
    {
        cout << "\nNumber is not prime";
    } else 
    {
        for (int i = 2; i < z; i++) 
        {
            if (z % i == 0) 
            {
                cout<<false;
            
            }
        }
       cout<<true;
        
    }

    return 0;
}