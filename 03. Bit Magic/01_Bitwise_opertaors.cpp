#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

int x=3, y=6;

cout<< (x&y)<<endl; //AND
cout<< (x|y)<<endl; //OR
cout<< (x^y)<<endl; //Xor
cout<< (x<<1)<<endl;  // left shift
cout<< (x>>2)<<endl; // right shift


int z=4;
int k=x<<z;
cout<< (k)<<endl;

cout<<~z;  //Bitwise Not


    return 0;

}