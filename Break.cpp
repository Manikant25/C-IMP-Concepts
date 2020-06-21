#include<iostream>
#include<math.h>
using namespace std;
int main()
{  int i,x;
    for (i = 0; i < 10; ++i) {
cin >> x;
if (x < 0.0) {
cout << "All done" << endl;
break; // exit loop if value is negative
}
cout << sqrt(x) << endl;
}
return 0;
}

/*  A test for a negative
value is made. If the test is true, the break statement causes the for loop to be exited.
Program control jumps to the statement immediately following the loop. */