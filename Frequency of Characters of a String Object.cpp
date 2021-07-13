// Frequency of Characters of a String Object...

#include<iostream>
using namespace std;

int main()
{
    string str = "I am Paarth";
    char checkCharacter = 'a';
    int count = 0;
    
    for(int i=0; i<str.size(); i++)
    {
        if(str[i] == checkCharacter)
        {
            count++;
        }
    }
    
    cout<<"Frequency of "<<checkCharacter<<" = "<<count;
    
    return 0;
}
