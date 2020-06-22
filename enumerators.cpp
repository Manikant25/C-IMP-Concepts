#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    enum suit { clubs, diamonds, hearts, spades };
    /* This declaration creates an integer type with the four suit names—clubs, diamonds,
hearts, and spades—as integer constants, whose values are 0, 1, 2, and 3, respectively.
These values are assigned by default, with the first enumerator being given the constant
integer value 0. Each subsequent member of the list is one more than its left neighbor.
The identifier suit is now its own unique type, distinct from other integer types. This
identifier is called a tag name. */

cout<<clubs<<endl; //0

/* Enumerators can be defined and initialized to arbitrary integer constants.*/
enum ages { laura = 11, max, debra = 39,
ira = debra + 7, robin };

cout<<robin;
/* The enumerators can be initialized to constant expressions. Note that the default rule
applies when there is no explicit initializer; therefore, in the example, max is 12 and
robin is 47. */

enum signal { off, on } a = on; // a initialized on
enum answer { no, yes, maybe = -1 } b;
enum neg { no, off} c; // illegal: no off redeclared
int i, j = on; // legal: on converted to 1
a = off; // legal
i = a; // legal: i becomes 0
b = i; // illegal
b = static_cast<answer>(i); // legal: explicit cast
    return 0;

}