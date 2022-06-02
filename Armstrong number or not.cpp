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


//Check Armstrong Number of 3 Digits

#include <iostream>
using namespace std;

int main() {
    int num, originalNum, remainder, result = 0;
    cout << "Enter a three-digit integer: ";
    cin >> num;
    originalNum = num;

    while (originalNum != 0) {
        // remainder contains the last digit
        remainder = originalNum % 10;
        
        result += remainder * remainder * remainder;
        
        // removing last digit from the orignal number
        originalNum /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}
