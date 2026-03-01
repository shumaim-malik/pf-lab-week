#include <iostream>
using namespace std;

main()
{
	int sum;
	int number;
	cout << " Enter a 4-digit number : ";
	cin>> number;
	
	int num1 ,num2 ,num3 ,num4; 
	
	num1=number % 10;
	number=number / 10;

	num2=number % 10;
	number=number / 10;

	num3=number%10;
	number=number/10;

	num4=number%10;
	
	
	sum=num1+num2+num3+num4;
	cout <<" The sum of number is : "<<sum;



}