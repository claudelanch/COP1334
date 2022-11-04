/* The program Telephone Digits outputs only telephone digits that correspond to uppercase letters.

Rewrite the program so that it processes both uppercase and lowercase letters and outputs the corresponding telephone digit.

If the input is something other than an uppercase or lowercase letter, the program must output an appropriate error message 

(The error message should contain the phrase Invalid input). 

SOLUTION BELOW  */

#include <iostream>

using namespace std;

int main()
{
    char letter;                                  

    cout << "Program to convert uppercase "
         << "letters to their corresponding "   
         << "telephone digits." << endl;       
  
    cout << "To stop the program enter #." 
         << endl;                                 

    cout << "Enter a letter: ";                   
    cin >> letter;                                
    cout << endl;                                 

    while (letter != '#')                         
    {
        cout << "The letter you entered is: "
             << letter << endl;                   
        cout << "The corresponding telephone "
             << "digit is: ";                     

        if (letter >= 'A' && letter <= 'z')       
            switch (letter)                       
            {
            case 'A': 
            case 'B': 
            case 'C': 
            case 'a': 
            case 'b': 
            case 'c':
                cout << "2" <<endl;               
                break;                            
            case 'D': 
            case 'E': 
            case 'F':
            case 'd': 
            case 'e': 
            case 'f':
                cout << "3" << endl;             
                break;                         
            case 'G': 
            case 'H': 
            case 'I':
            case 'g': 
            case 'h': 
            case 'i':
                cout << "4" << endl;              
                break;                            
            case 'J': 
            case 'K': 
            case 'L':			
            case 'j': 
            case 'k': 
            case 'l': 
                cout << "5" << endl;           
                break;                          
            case 'M': 
            case 'N': 
            case 'O':
            case 'm': 
            case 'n': 
            case 'o':
                cout << "6" << endl;            
                break;                           
            case 'P': 
            case 'Q': 
            case 'R': 
            case 'S': 
            case 'p': 
            case 'q': 
            case 'r': 
            case 's': 
                cout << "7" << endl;              
                break;                            
            case 'T': 
            case 'U': 
            case 'V':
            case 't': 
            case 'u': 
            case 'v':
                cout << "8" << endl;              
                break;                          
            case 'W': 
            case 'X': 
            case 'Y':
            case 'Z': 
            case 'w': 
            case 'x': 
            case 'y': 
            case 'z': 
                cout << "9" << endl;              
            }
        else                                     
            cout << "Invalid input." << endl;   

        cout << "\nEnter another uppercase "
             << "letter to find its " 
             << "corresponding telephone digit."
             << endl;                            
        cout << "To stop the program enter #."
             << endl;                             

        cout << "Enter a letter: ";               
        cin >> letter;                            
        cout << endl;                             
    }

    return 0;
}
