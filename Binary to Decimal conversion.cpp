//Binary to Decimal conversion...

#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long decimal_num=0; //Final decimal number
    string binary; //Binary number to convert
    
    cout<<"Enter the Binary number: "<<endl;
    cin>>binary;
    
    //Next step is to reverse the binary number
    reverse(binary.begin(), binary.end());
    
    //String is now reversed
    int size = binary.size();
    
    for(int i=0; i<size; i++)
    {
        if(binary[i] == '1')
        {
            decimal_num += pow(2, i);
        }
    }
    
    cout<<"Decimal number is: "<<decimal_num<<endl;
    
    return 0;
}

// Enter the Binary number: 
// 1111101000
// Decimal number is: 1000
