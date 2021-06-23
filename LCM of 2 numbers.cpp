//LCM of 2 numbers...

#include<iostream>
using namespace std;

int main()
{
    int num1, num2, mult, lcm;
    
    cout<<"Enter First number: "<<endl;
    cin>>num1;
    
    cout<<"Enter Second number: "<<endl;
    cin>>num2;
    
    mult = num1 * num2;
    
    for(int i=1; i<=mult; i++)
    {
        if(mult%i==0 && i%num1==0 && i%num2==0)
        {
            lcm = i;
            break;
        }
    }
    
    cout<<"LCM of "<<num1<<" & "<<num2<<" is: "<<lcm<<endl;
    
    return 0;
}
