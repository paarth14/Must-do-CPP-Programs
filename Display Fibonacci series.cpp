//Display Fibonacci series...

#include<iostream>
using namespace std;

int main()
{
    int n, t1=0, t2=1, next_term;
    
    cout<<"Enter a positive integer: "<<endl;
    cin>>n;
    
    cout<<"Fibonacci series: "<<t1<<" , "<<t2<<" , ";
    
    next_term = t1 + t2;
    
    while(next_term<=n)
    {
        cout<<next_term<<" , ";
        t1 = t2;
        t2 = next_term;
        next_term = t1 + t2;
    }
    
    return 0;
}
