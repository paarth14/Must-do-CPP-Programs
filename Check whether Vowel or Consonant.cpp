//Check whether vowel or consonant...

#include<bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    
    bool lowerCase;
    bool upperCase;
    
    cout<<"Enter an alphabet: "<<endl;
    cin>>c;
    
    lowerCase = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    upperCase = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    
    if(!isalpha(c))
    {
        cout<<"Not a character"<<endl;
    }
    
    else if(lowerCase || upperCase)
    {
        cout<<c<<" is a Vowel"<<endl;
    }
    
    else
    {
        cout<<c<<" is a Consonant"<<endl;
    }
    
    return 0;
}
