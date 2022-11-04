/* Write a program that prompts the user to input a sequence of characters and outputs the number of vowels.
(Use the function isVowel written in Programming Exercise 2.)

Your output should look like the following:

There are # vowels in this sentence.
... where # is the number of vowels.  */

#include <iostream>
#include <string>

using namespace std;
bool isVowel(char x);
int vowelCount = 0;


int main() {
  

  char yourString;
  
  while (cin.get(yourString) && yourString != '.' )
   {
     isVowel(yourString);
   }

   cout << "There are "<< vowelCount << " vowels in this sentence.";

    return 0;
}

bool isVowel (char x)
{ 
  
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
   vowelCount++;
      return true;
   
   default:
     return false;

 }

}
