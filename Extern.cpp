#include<iostream>
using namespace std;
extern int x = 32;
int b = 8;
int main() {
   extern int b;
   printf("The value of extern variables x and b : %d,%d\n",x,b);
   x = 15;
   printf("The value of modified extern variable x : %d\n",x);
   return 0;
}
/*External variables are also known as global variables. 
These variables are defined outside the function and are available globally throughout the function execution. 
The “extern” keyword is used to declare and define the external variables.

The keyword [ extern “C” ] is used to declare functions in C++ which is implemented and compiled in C language.
 It uses C libraries in C++ language. */