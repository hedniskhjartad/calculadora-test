#include <iostream>
#include <limits>
#include <cctype>
#include "functions.hpp"

using std::cin, std::cout , std::string;

bool isValidNumber(double& n);
void menu();

int main(){

unsigned int operation;
const int limit = 6;

string input;
bool isValid = false;

bool isValid2 = false;
double number1 = 0;
double number2 = 0;


while (true)
{

    while (isValid == false)
    {
        menu();
        cin >> input;

        if (input.empty()){
            cout << "Error Empty!\n";
            continue;}

        bool isInteger = true;
        
        for (char c : input){

            if (!std::isdigit(c)){
                isInteger = false;
                break;
            }
        }
        
        if (isInteger == false){
            cout << "Error decimals and characters are not allowed !\n\n";
            continue;
        }
        
        unsigned long ConvertedValor = std::stoul(input);

        if (ConvertedValor <= limit && ConvertedValor >= 1){
            operation = static_cast<unsigned int>(ConvertedValor);
            isValid = true;
        }
        else{cout << "Error option has to be in 1 - 6 range !\n\n";
            continue;}
        

        if (operation == limit){return 0;}
    }
    
    isValid = false;
    
    while (isValid2 == false){

    cout << "Type 1st number : ";
    while(!isValidNumber(number1)){
        cout <<"\nInvalid number\n";
        cout << "Type 1st number : ";
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
    cout << "\nType 2nd number : ";
    while(!isValidNumber(number2)){
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
    
    isValid2 = true;
    }
isValid2 = false;

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

bool isValidNumber(double& n){

    if (cin >> n)
    {
        if (cin.peek() == '\n' || cin.peek() == EOF)
        {
            return true;
        } 
}
return false;

};