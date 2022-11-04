/* To make telephone numbers easier to remember, some companies use letters to show their telephone number. For example, using letters, the telephone number 438-5626 can be shown as GET LOAN.

In some cases, to make a telephone number meaningful, companies might use more than seven letters. For example, 225-5466 can be displayed as CALL HOME, which uses eight letters.

Instructions
Write a program that prompts the user to enter a telephone number expressed in letters and outputs the corresponding telephone number in digits.

If the user enters more than seven letters, then process only the first seven letters.

Also output the - (hyphen) after the third digit.

Allow the user to use both uppercase and lowercase letters as well as spaces between words.

Moreover, your program should process as many telephone numbers as the user wants. 

SOLUTION */

#include <iostream>
#include <string>
using namespace std;

int main(){

char letter; 
int counter; 
char start_prog; 

cout << "Enter Y/y to convert a telephone number from letters to " <<
" digits, or any other letter to end program." << endl;
cin >> start_prog;

while (start_prog == 'Y' || start_prog == 'y')
{
cout << "Enter a telephone number using letters: ";
cin >> letter; 

cout << endl;

counter = 0;
cout << "The corresponding telephone number is: " << endl;

while (counter < 7)
{
counter++; 
switch (letter)  
{
case 'a':
case 'b':
case 'c':
case 'A':
case 'B':
case 'C':
cout << '2';
break;

case 'd':
case 'e':
case 'f':
case 'D':
case 'E':
case 'F':
cout << '3';
break;

case 'g':
case 'h':
case 'i':
case 'G':
case 'H':
case 'I':
cout << '4';
break;

case 'j':
case 'k':
case 'l':
case 'J':
case 'K':
case 'L':
cout << '5';
break;

case 'm':
case 'n':
case 'o':
case 'M':
case 'N':
case 'O':
cout << '6';
break;

case 'p':
case 'q':
case 'r':
case 's':
case 'P':
case 'Q':
case 'R':
case 'S':
cout << '7';
break;

case 't':
case 'u':
case 'v':
case 'T':
case 'U':
case 'V':
cout << '8';
break;

case 'w':
case 'x':
case 'y':
case 'z':
case 'W':
case 'X':
case 'Y':
case 'Z':
cout << '9';
break;
}
if (counter == 3)
cout << '-';
cin >> letter;
} 
cin.ignore(100, '\n');

cout << endl;
cout << "For another telephone number, enter Y/y " << endl;
cout << "Enter any other letter to terminate the program." << endl;
cin >> start_prog;
cout << endl;
}
return 0;
}
