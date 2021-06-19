//Factorial of a number...

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    unsigned long long fact=1;
    
    cout<<"Enter a positive integer: "<<endl;
    cin>>n;
    
    for(int i=1; i<=n; i++)
    {
        fact *= i;
    }
    
    cout<<"Factorial is: "<<fact<<endl;
    
    return 0;
}
