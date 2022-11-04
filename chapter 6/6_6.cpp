/* Instructions
Write a program to test the functions described in Exercises 23 and 26 of this chapter.

Instructions for Exercise 23 and Exercise 26 have been posted below for your convenience.

Exercise 23
Write the definition of a void function that takes as input an integer and outputs two times the number if it is even; otherwise it outputs five times the number.

Exercise 26
Write the definition of a void function that takes as input two integer values, say n and m. The function returns the sum and average of all 
the numbers between n and m (inclusive). */

#include <iostream>

using namespace std;

void multiply (int x);
void average (int n, int m);

int main() {
    
    int yourNumber;
    int num1, num2;

    cin >> yourNumber;
    multiply (yourNumber);
    
    

    cin >> num1 >> num2;
    average(num1,num2);
   
    
    return 0;
}


void multiply (int x){
  if (x%2==0){
    x= 2*x;
    
    cout<< x;
    
  }
  else 
  {
  x= 5*x;
  cout << x << endl;
  }
}

void average (int n, int m){
  double sum = 0;
  double currentNum = 0;
  double counter = 1;
  double average;

  if (n<m){
    while (n<=m){
      sum = sum + n;
      average = sum/counter;
      n = n+1;
      counter++;
      
    }

 cout << "the sum is " << sum << endl;
 cout << "the average is " << average << endl;    
  }
    
  }



