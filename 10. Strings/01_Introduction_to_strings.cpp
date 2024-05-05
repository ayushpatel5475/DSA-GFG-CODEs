#include <iostream>
#include <vector>
#include <list>
using namespace std;
//PRINT FREQUENCY OF THE CHARACTERS in ORDER in a string of lower alphabets   
int main (){
    string str="geeksforGeeks";
    
    int count[26]={0};
    for ( int i=0;i<str.length();i++)
        count[str[i]-'a']++;
        for ( int i=0;i<26;i++)
            if ( count [i]>0)
                cout<<(char)(i+'a')<<" "
                <<count[i]<<endl;
            }   