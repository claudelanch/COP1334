/* Write a program that defines the named constant PI, const double PI = 3.14159;, which stores the value of π. The program should use PI and the functions listed in Table 6-1 to accomplish the following:

Output the value of √π .
Prompt the user to input the value of a double variable r, which stores the radius of a sphere. The program then outputs the following:
The value of 4.0πr², which is the surface area of the sphere.
The value of (4.0/3.0)πr³, which is the volume of the sphere.
You should format your output like the following example:

Surface area of the sphere: 4 * PI * 5.00 ^ 2 = 314.16
Volume of the sphere: 4 / 3 * PI * 5.00 ^ 3 = 523.60
Your output must match the wording precisely to earn full credit. Format your output with setprecision(2) to ensure the proper number of decimals for testing! */

#include <iostream>
#include <cmath>
#include <iomanip>

double isSA(double x);

double isVolume(double y);

const double PI = 3.14159;
double r;

using namespace std;


int main()

{

cout << fixed << setprecision(2) << endl;


double s = 0;
double vol = 0;



cout << "The square root of PI is: " << sqrt(PI) << endl;

cout << "Enter a radius: ";
cin >> r;

cout << "Surface area of the sphere: 4 * PI * " << r << " ^ 2 = " << isSA(s) << endl;

cout << "Volume of the sphere: 4 / 3 * PI * "<< r << " ^ 3 = "<< isVolume(vol) << endl;

return 0;

}

double isSA (double x)

{


x = pow(r, 2.0) * PI * 4.0;

return x;

}

double isVolume (double y)

{

//double r;

// const double PI = 3.14159;

y = pow(r, 3.0) * PI * (4.0/3.0);

return y;

}
