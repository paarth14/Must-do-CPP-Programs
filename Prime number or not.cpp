//Check Whether a number is Prime or not...

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    
    cout<<"Enter a positive integer: "<<endl;
    cin>>n;
    
    bool flag = 0;
    
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            cout<<"Not a prime number"<<endl;
            flag = 1;
            break;
        }
    }
    
    if(flag == 0)
    {
        cout<<"It's a Prime number!!"<<endl;
    }
    
    return 0;
}
