/* Write a program that prompts the user to input an integer and then outputs both the individual digits of the number and the sum of the digits.
For example, it should output the individual digits of:

3456 as 3 4 5 6
8030 as 8 0 3 0
2345526 as 2 3 4 5 5 2 6
4000 as 4 0 0 0
-2345 as 2 3 4 5 */


#include<iostream>
#include<cmath>

using namespace std;
int main()
{
   int enter_num, temp_num, sum = 0;
   int divisor, digit, count = 0;

   cout<<"Please enter number"<<"\n";
   cin>>enter_num;

   temp_num = enter_num;

   
   while (temp_num != 0)
   {
       temp_num = temp_num/10;
       count++;
       
   }

   temp_num = enter_num;
   

  
   cout<<"Individual digits in the entered number are ";
   do
   {

       divisor = static_cast<int>(pow(10.0, --count));
       digit = temp_num / divisor;
       temp_num = temp_num % divisor;

       if (digit < 0)
       digit = digit*(-1);

       cout<<" "<<digit;
       sum = sum + digit;
   }
   while(count != 0);

   cout<<"\n"<<"Sum of the digits is = "<<sum<<"\n";

   return 0;
}

