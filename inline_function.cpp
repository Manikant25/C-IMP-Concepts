#include<iostream>
using namespace std;

inline double cube(double x)
{
return (x * x * x);
}

int main()
{
    int n;
    cin>>n;
    cout<<cube(n);
}