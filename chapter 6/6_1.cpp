/* Write a program that uses the function isPalindrome given in Example 6-6 (Palindrome). Test your program on the following strings:

madam, abba, 22, 67876, 444244, trymeuemyrt
Modify the function isPalindrome of Example 6-6 so that when determining whether a string is a palindrome, cases are ignored, that is, uppercase and lowercase letters are considered the same.

*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;


bool isPalindrome(string str) 
{
  int length = str.length(); 
for (int i = 0; i < length / 2; i++) 
   {

    if (str[i] != str[length - 1 - i]) 
    {
      if (static_cast<char>(tolower(str[i])) == static_cast<char>(str[length - 1 - i]) || static_cast<char>(toupper(str[i])) == static_cast<char>(str[length - 1 - i] ) )
      {
        cout << str << " is a palindrome";
        cout << endl;
 return true; 
      }
      cout << str << " is not a palindrome";
      cout << endl;
         return false;
    } // if    
   } // for loop
   cout << str << " is a palindrome";
   cout << endl;
 return true;
 
}
    
int main () {

  isPalindrome("madam");
  isPalindrome("Madam");
  isPalindrome("abba");
  isPalindrome("abBa");
  isPalindrome("22");
  isPalindrome("444244");
  isPalindrome("67876");
  isPalindrome("trymeuemyrt");
  isPalindrome("trYmeuemyRT");
  

  return 0;
}


