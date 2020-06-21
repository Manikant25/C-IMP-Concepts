#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{  int i,MAX=10,count_non_digits=0;
char c;
    for (i = 0; i < MAX; ++i) {
cin.get(c);
if (isdigit(c)) {
cout << c; // echo digit
// do more stuff
continue; // terminate current iteration
}
// process other characters
count_non_digits++;
 // do more stuff
}
return 0;
}