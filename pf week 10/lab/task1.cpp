#include <iostream>
using namespace std;

void add (int number1, int number2);

int main()
{
    int num1 , num2 ; 
    cout <<" Enter first number ";
    cin >> num1;
    cout <<" Enter second number ";
    cin >> num2 ; 
    add (num1 , num2 );
     
    return 0 ;
}

void add(int number1 ,int number2)
{
    cout <<" sum is : " << number1 + number2;
}