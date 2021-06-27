//Power of a number...

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int base, exponent, result;
    
    cout<<"Enter Base: "<<endl;
    cin>>base;
    
    cout<<"Enter Exponent: "<<endl;
    cin>>exponent;
    
    result = pow(base, exponent);
    
    cout<<"Power: "<<base<<" ^ "<<exponent<<" = "<<result<<endl;
    
    return 0;
}
