//Reverse of a Sentence...

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    
    cout<<"Enter a string: "<<endl;
    getline(cin, str);
    
    reverse(str.begin(),str.end());
    
    cout<<"Reversed string is: "<<str;
    
    return 0;
}
