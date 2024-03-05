#include <iostream>
 
#include <cmath>    
using namespace std;
/*//naive approach
int countDigit(long n)
{
    int count=0;
    while (n!=0){
        n=n/10;
        ++count;
    }
   
return count;
}
*/

//logarithmic approach
int countDigit(long n)
{
    return floor(log10(n)) + 1;
}


int main(){

int m=countDigit(1020305040);
    cout<<m;
    return 0;
}