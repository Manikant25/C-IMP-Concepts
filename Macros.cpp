#include<iostream>
#include<math.h>
#define SQR(X) ((X) * (X))
#define CUBE(X) (SQR(X)*(X))
#define ABS(X) (((X) < 0) ? -(X) : X)
using namespace std;

int main()
{   int y,t;
cin>>t;
    y = SQR(t + 8) - CUBE(t - 8);
    y = SQR(t + 8); // expands to t + 8 * t + 8
cout << sqrt(ABS(y));
}