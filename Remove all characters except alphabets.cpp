// Remove all characters except alphabets...

#include<iostream>
using namespace std;

int main()
{
    string line;
    string temp = "";
    
    cout<<"Enter a string: "<<endl;
    getline(cin, line);
    
    for(int i=0; i<line.size(); i++)
    {
        if(line[i]>='a' && line[i]<='z' || line[i]>='A' && line[i]<='Z')
        {
            temp += line[i];
        }
    }
    
    line = temp;
    cout<<"Output string: "<<line;
    
    return 0;
}

/*Output:
Enter a string: 
p./r./o**gr@!miz
Output string: progrmiz*/
