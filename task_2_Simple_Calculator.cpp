#include<iostream>
using namespace std ; 

int main()
{
    char op ;
    cout << "Enter the operator you want to perform on the two numbers : " ;
    cin >> op ;

    float number_1 , number_2 ;
    cout << "Enter the first number : " ;
    cin >> number_1 ;
    cout << "Enter the second number : " ;
    cin >> number_2 ;

    switch (op)
    {
    case '+':
        cout << "Addition of the given two numbers is : " << number_1 + number_2 << endl ;
        break;

    case '-':
        cout << "Subtraction of the given two numbers is : " << number_1 - number_2 << endl ;
        break;

    case '*':
        cout << "Multiplication of the given two numbers is : " << number_1 * number_2 << endl ;
        break;

    case '/':
        cout << "Division of the given two numbers is : " << number_1 / number_2 << endl ;
        break;

    default:
        cout << "Error! wrong operator entered..." << endl ;
        break;
    }
    return 0 ; 
}