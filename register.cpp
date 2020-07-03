#include<iostream>
using namespace std;
int main()
{
    int arr[10];
 /** Or register int i , by defualt it is considered to be integer */
    for(register i=0;i<10;i++)
    cin>>arr[i];
    for(register i=0;i<10;i++)
    cout<<arr[i];
    return 0;
}