#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
// Pallindrome Check
/*
//naive
bool isPal( string str){
    string rev=str;
    reverse(rev.begin(), rev.end());
    return ( rev==str);  //if rev is same as str then return True else false
}

*/

// efficient
bool isPal(string &str) // by reference
{
    int begin = 0;
    int end = str.length() - 1;

    while (begin < end)
    {
        if (str[begin] != str[end])
            return false;
        begin++;
        end--;
    }
    return true;
}

int main()
{
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (isPal(input))
    {
        cout << "The entered string is a palindrome." << endl;
    }
    else
    {
        cout << "The entered string is not a palindrome." << endl;
    }

    return 0;
}