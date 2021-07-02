//Armstrong number of n digits

//Armstrong number : It is the sum of power of the individual digits which is equivalent to the given number.

//Example : 153 = Number of digits : 3 so, 1^3 + 5^3 + 3^3 = 153.


#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n, t, temp, digit, count=0, sum=0, rem;
    
    cout<<"Enter a positive integer: "<<endl;
    cin>>n;
    
    cout<<endl;
    
    t = n;
    
    temp = n;
    
    while(n!=0)
    {
        digit = n%10;
        count += 1;
        n /= 10;
    }
    
    while(t!=0)
    {
        rem = t%10;
        sum += pow(rem,count);
        t /= 10;
    }
    
    if(sum == temp)
    {
        cout<<temp<<" is an Armstrong number";
    }
    
    else
    {
        cout<<temp<<" is not an Armstrong number";   
    }
    
    return 0;
}
