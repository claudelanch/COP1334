/* Write a program that prompts the user to enter two integers.

The program outputs how many numbers are multiples of 3 and how many numbers are multiples of 5 between the two integers (inclusive). */

#include <iostream>

using namespace std;

int main()
{
    int number1{0};
    int number2{0};
    int i;
    
    cout << "     Please enter an integer: ";
    cin >> number1;
    
    cout << "Please enter another integer: ";
    cin >> number2;
    
    int count_multiple_of_3{0};
    int count_multiple_of_5{0};

    if (number1 > number2)
    {
      for(i = number2; i <= number1; i++)
    {
        if(i % 3 == 0)
            count_multiple_of_3++;
        
        if(i % 5 == 0)
            count_multiple_of_5++;
    }
    }

    for(i = number1; i <= number2; i++)
    {
        if(i % 3 == 0)
            count_multiple_of_3++;
        
        if(i % 5 == 0)
            count_multiple_of_5++;
    }
    
    cout << "Multiples of 3: " << count_multiple_of_3 << '\n';
    cout << "Multiples of 5: " << count_multiple_of_5 << '\n';
    
    return 0;
}
