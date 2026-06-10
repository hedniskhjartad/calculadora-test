#include <iostream>
#include <limits>
#include "functions.hpp"

using std::cin, std::cout;

void menu();

int main(){

    unsigned int operation;
    const int limit = 6;

    while (operation != limit){
    menu();

    while (!(cin >> operation) || operation > limit || operation <= 0){
        cout << "Error invalid option !\n";
        menu();
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }

    if (operation == limit)
    {
        return 0;
    }
    

    double number1;
    double number2;
    
    cout << "Type 1st number : ";
    while(!(cin >> number1)){
        cout <<"\nInvalid number\n";
        cout << "Type 1st number : ";
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
    cout << "\nType 2nd number : ";
    while(!(cin >> number2)){
        cout <<"\nInvalid number\n";
        cout << "\nType 2nd number : ";
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }

    switch (operation)
    {
    case 1: cout << "Result = " << addition(number1,number2) << "\n\n" ;break;
    case 2: cout << "Result = " << subtraction(number1,number2) << "\n\n";break;
    case 3: cout << "Result = " << multiplication(number1,number2) << "\n\n";break;
    case 4: cout << "Result = " << division(number1,number2) << "\n\n";break;
    case 5: cout << "Result = " << power(number1,number2) << "\n\n";break;

    default:cout << "Error, invalid value\n";break;
    }
    
    }

return 0;
}

void menu(){
    cout << "Choose an operation\n\n";
    cout << "1. +\n";
    cout << "2. -\n";
    cout << "3. x\n";
    cout << "4. /\n";
    cout << "5. ^\n";
    cout << "6 Exit\n";
}
