#include <iostream>
#include <limits>
#include "functions.hpp"

using std::cin, std::cout;

int main(){

    int operation;

    while (operation != 5){
    cout << "Choose an operation\n\n";
    cout << "1. +\n";
    cout << "2. -\n";
    cout << "3. x\n";
    cout << "4. /\n";
    cout << "5. Exit\n";
    cin >> operation;
    if (operation == 5){return 0;}
    

    int number1;
    int number2;
    
    cout << "Type 1st number : ";
    if(!(cin >> number1)){
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
    cout << "\nType 2nd number : ";
    if(!(cin >> number2)){
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }

    switch (operation)
    {
    case 1: cout << "Result = " << addition(number1,number2) << "\n\n" ;break;
    case 2: cout << "Result = " << subtraction(number1,number2) << "\n\n";break;
    case 3: cout << "Result = " << multiplication(number1,number2) << "\n\n";break;
    case 4: cout << "Result = " << division(number1,number2) << "\n\n";break;

    default:cout << "Error, invalid value\n";break;
    }
    
    }

return 0;
}