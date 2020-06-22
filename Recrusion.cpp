#include<iostream>
using namespace std;
// Recursive factorial function
long factorial(int n)
{
if (n <= 1)
return 1;
else
return n * factorial(n - 1);
}
/*Notice how the recursive call is with the expression n-1. This guarantees that the
function factorial() terminates. Each recursion reduces the called expression by 1
until the termination condition n <= 1 is true. In running this computation, be aware
that for even relatively small values of n (such as 13), the computation fails because of
integer overflow. */

// Recursive blast_off function
void count_down(unsigned int n)
{
if (n <= 0)
cout << "BLAST OFF" << endl;
else {
cout << "Count_down at time " << n << endl;
count_down(n - 1);
}
}


int main()
{
  cout<<factorial(5)<<endl;
  count_down(5);

    return 0;
}