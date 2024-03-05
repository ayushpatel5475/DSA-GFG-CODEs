#include <iostream>
using namespace std;

/*Can also use this
void kthBit(int n, int k)
{
    if ((n>>(k-1))&1)==1)
}

*/
void kthBit(int n, int k)
{
    if (n & (1 << (k - 1)) != 0)
        cout << "Yes";
    else
        cout << "No";
}



int main(){

 int n, k;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter the bit position: ";
    cin >> k;
    kthBit(n, k);
    return 0;
}