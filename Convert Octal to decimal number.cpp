//Convert Octal to decimal number...

#include<bits/stdc++.h>
using namespace std;

int octo(int num)
{
    int rem,sum=0,i=0;
    
    while(num!=0)
    {
        rem = num%10;
        sum += rem * pow(8,i);
        i++;
        num /= 10;
    }
    
    return sum;
}

int main()
{
    int num;
    cout<<"Enter any octal number: "<<endl;
    cin>>num;
    
    cout<<"Decimal number of "<<num<<" is: "<<octo(num);
    
    return 0;
}
