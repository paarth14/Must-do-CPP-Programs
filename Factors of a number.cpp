//Display all the factors of a number...

#include<iostream>
using namespace std;

int main()
{
    int n;
    
    cout<<"Enter a positive integer: "<<endl;
    cin>>n;
    
    cout<<"Factors of "<<n<<" are: ";
    
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    }
    
    return 0;
}
