#include <iostream>
using namespace std;
// conversion constants
const double lbs_to_kg = 2.2046, 
inches_to_meter = 39.370;
int main()
{
int weight, height;// in pounds and inches
double kilograms, meters;
cout << "\nEnter weight in pounds: ";
cin >> weight;
kilograms = weight / lbs_to_kg;
cout << "\nThis is approximately " 
<< static_cast<int>(kilograms) << "kg."  //Explicit type conversion from doube to int 
<< endl;
cout << "\nEnter height in inches: ";
cin >> height;
meters = height/inches_to_meter;
cout << "\nYour BMI is approximately " 
<< "body fat ratio is " 
<< kilograms/(meters * meters)  //Implicit Type conversion
<< ". Under 25 is good." 
<< endl; 
}
