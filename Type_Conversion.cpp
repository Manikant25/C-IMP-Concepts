#include<iostream>
using namespace std;
int main()
{
    char y,x;
    int n;
    y = static_cast<char>('A' + 1);  //Explicit Type conversion
    x = static_cast<double>(static_cast<int>(y) + 1);  
    n=x;
cout<<y<<" "<<x<<" "<<n;

return 0;
}