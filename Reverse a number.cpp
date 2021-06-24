//Reverse a number..

#include<iostream>
using namespace std;

int main()
{
    int n, rev = 0, rem;
    
    cout<<"Enter a positive integer: "<<endl;
    cin>>n;
    
    while(n!=0)
    {
        rem = n%10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    
    cout<<endl;
    
    cout<<"Reversed Number is: "<<rev<<endl;
    
    return 0;
}
