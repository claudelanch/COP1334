/* Write a value-returning function, isVowel, that returns the value true if a given character is a vowel and otherwise returns false.

For the input E, your output should look like the following:

E is a vowel: 1
When printing the value of a bool, true will be displayed as 1 and false will be displayed as 0.  */

#include <iostream>

using namespace std;

bool isVowel(char x);

int main() {

 char yourLetter;

 cout << "Input a letter to see if its a vowel" << endl;
 cin >> yourLetter;
 cout << endl;

 isVowel (yourLetter);

    return 0;
}

bool isVowel (char x){ 
 switch (x){
   case 'A':
   case 'E':
   case 'I':
   case 'O':
   case 'U':
   case 'a':
   case 'e':
   case 'i':
   case 'o':
   case 'u':
   cout << x << " is a vowel: 1";
      return true;
   
   default:
   cout << x << " is a vowel: 0 ";
     return false;

 }

}


