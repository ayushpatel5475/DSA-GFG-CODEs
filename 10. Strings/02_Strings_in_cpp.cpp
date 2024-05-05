#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{

    char str[] = "gfg";
    char str2[6] = "gfg";

    cout << str << "\n";
    cout << str2 << "\n";

    cout << "Size :" << sizeof(str) << "\n";
    cout << sizeof(str2) << "\n";

    char str3[] = {'g', 'f', 'g'};
    cout << str3 << "   NOTE that it is an error !"
         << "\n";

    char str4[] = {'g', 'f', 'g', '\0'}; // MUST put \0 at the end
    cout << str4 << "   NOTE that its ok !"
         << "\n";

    char s1[] = "abc";
    char s2[] = "bcd";

    // for strcmp must #include <cstring
    int res = strcmp(s1, s2);
    if (res > 0)
        cout << "Greater";
    else if (res == 0)
        cout << "Same";
    else
        cout << "Smaller";

    // char str[5];
    // str='gfg';  --NOTE that it is error ( Can not assign one address to another address,  100=110 ( int =int ) WRONG)

    char str5[5];
    strcpy(str5, "gfg");
    cout << "\n"
         << str << "\n";

    // C++ string
    string st3 = "geeksforgeeks";
    st3 = st3 + "xyz";
    cout << st3 << "\n";
    cout << st3.substr(1, 3) << "\n ";
    cout << st3.find("eek") << "\n ";

    string st4 = "abc";
    if (st3 == st4)
        cout << "SAME"
             << "\n ";
    else if (s1 > s2)
        cout << "samller"
             << "\n ";
    else
        cout << "Greater"
             << "\n ";
//Traversing to an string

    string st5="geeksforgeeks and I am ayush";
    for ( int i=0;i<st5.length();i++)
        cout<<st5[i];
    cout<<endl;
    //Another way
    for ( char x:st5)
            cout<<x;


    return 0;
}
