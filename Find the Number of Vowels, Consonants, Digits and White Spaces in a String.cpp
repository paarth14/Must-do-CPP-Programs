// Find the Number of Vowels, Consonants, Digits and White Spaces in a String...

#include<iostream>
using namespace std;

int main()
{
    string line;
    int vowels, consonants, digits, whitespaces;
    
    vowels = consonants = digits = whitespaces = 0;
    
    cout<<"Enter a Sentence: "<<endl;
    getline(cin, line);
    
    for(int i=0; i<line.length(); i++)
    {
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' ||
           line[i]=='o' || line[i]=='u' || line[i]=='A' ||
           line[i]=='E' || line[i]=='I' || line[i]=='O' ||
           line[i]=='U')
        {
            vowels++;
        }
        
        else if(line[i]>='a' && line[i]<='z' || line[i]>='A' && line[i]<='Z')
        {
            consonants++;
        }
        
        else if(line[i]>='0' && line[i]<='9')
        {
            digits++;
        }
        
        else if(line[i]==' ')
        {
            whitespaces++;
        }
    }
    
    cout<<endl;
    
    cout<<"Vowels are: "<<vowels<<endl;
    cout<<"Consonants are: "<<consonants<<endl;
    cout<<"Digits are: "<<digits<<endl;
    cout<<"Whitespaces are: "<<whitespaces<<endl;
    
    return 0;
}
