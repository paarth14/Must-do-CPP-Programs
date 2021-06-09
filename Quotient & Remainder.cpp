//Find quotient & remainder

#include<iostream>
using namespace std;

int main()
{
    int dividend, divisor, quotient, remainDer;
    
    cout<<"Enter Dividend: "<<endl;
    cin>>dividend;
    
    cout<<"Enter Divisor: "<<endl;
    cin>>divisor;
    
    quotient = dividend / divisor;
    remainDer = dividend % divisor;
    
    cout<<"Quotient is: "<<quotient<<endl;
    cout<<"Remainder is: "<<remainDer<<endl;
    
    return 0;
}
