//Sum of n natural numbers...

#include<iostream>
using namespace std;

int main()
{
    int n, sum=0;
    
    cout<<"Enter a positive integer: "<<endl;
    cin>>n;
    
    for(int i=1; i<=n; i++)
    {
        sum += i;
    }
    
    cout<<"Sum is: "<<sum<<endl;
    
    return 0;
}
