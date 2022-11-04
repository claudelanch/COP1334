/* Write a program to test the functions described in Exercises 11 and _14_ of this chapter.

Instructions for Exercise 11 and Exercise 14 have been posted below for your convenience.

Exercise 11
Write the definition of a function that takes as input a char value, and returns true if the character is a whitespace character; otherwise it returns false.

If the character is a whitespace character, output the following message: The character you entered is a whitespace character, otherwise output: The character you entered is not a whitespace character.

Exercise 14
Write the definition of a function that takes as input three numbers. The function returns true if the floor of the product of the first two numbers equals the floor of the third number; otherwise it returns false. (Assume that the three numbers are of type double.) Output the appropriate message: The product of the first two numbers is not equal to the floor of the third number

or

The product of the first two numbers is equal to the floor of the third number */

#include <iostream>
#include <cmath>

using namespace std;

bool itsWhiteSpace (char x);
bool itsPF (double x, double y, double z);

int main() {
    char yourValue;
    double num1, num2, num3;
    
    cin.get(yourValue);
    itsWhiteSpace(yourValue);


    cin>> num1 >> num2 >> num3;
    itsPF (num1, num2, num3);
    
    return 0;
}

bool itsWhiteSpace (char x){
  if (x==' ')
  {
    cout << "The character you entered is a whitespace character" << endl;
    return true;
  }
  else 
  cout <<"The character you entered is not a whitespace character" <<endl;
  return false;
  
}

bool itsPF (double x, double y, double z){
  if (floor(x*y)==floor(z)){
    cout <<"The product of the first two numbers is equal to the floor of the third number";
    
    return true;
  }
  else
  cout<< "The product of the first two numbers is not equal to the floor of the third number";
  return false;
}
