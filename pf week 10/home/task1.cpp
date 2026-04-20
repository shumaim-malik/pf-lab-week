#include <iostream>
using namespace std;


void add(int number1, int number2);

int main() 
{
    int n1, n2;

    cout << "Enter Number 01: ";
    cin >> n1;
    cout << "Enter Number 02: ";
    cin >> n2;

    add(n1, n2); 

    return 0;
}

void add(int number1, int number2) 
{
    int sum = number1 + number2;
    cout << "The sum is: " << sum << endl;
}