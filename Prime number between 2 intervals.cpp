//Display Prime numbers between 2 intervals...

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int low, high;
    bool isPrime;
    
    cout<<"Enter Lowest number (Interval): "<<endl;
    cin>>low;
    
    cout<<"Enter Highest number (Interval): "<<endl;
    cin>>high;
    
    //swapping if low is greater than high
    if(low > high)
    {
        int temp = low;
        low = high;
        high = temp;
    }
    
    cout<<"Prime numbers between "<<low<<" and "<<high<<" are: "<<endl;
    
    while(low<high)
    {
        isPrime = true;
        
        if(low == 0 || low == 1)
        {
            isPrime = false;
        }
        
        else
        {
            for(int i=2; i<=sqrt(low); i++)
            {
                if(low%i==0)
                {
                    isPrime = false;
                    break;
                }
            }
        }
        
        if(isPrime)
        {
            cout<<low<<" , ";
        }
        
        ++low;
    }
    
    return 0;
}
