#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, word="", longest="";

    cout<<"Enter sentence: ";
    getline(cin,s);

    s = s + " ";

    for(char ch : s)
    {
        if(ch!=' ')
            word += ch;
        else
        {
            if(word.length()>longest.length())
                longest=word;

            word="";
        }
    }

    cout<<"Longest word: "<<longest<<endl;
    cout<<"Length: "<<longest.length();

    return 0;
}