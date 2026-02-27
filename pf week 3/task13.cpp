#include <iostream>
using namespace std;

main()
{
	double power;
	cout <<" Enter voltage :";
	int voltage;
	cin >>voltage;
	cout <<" Enter current : ";
	double current;
	cin >>current;
	power=voltage*current;
	cout << "the power is "<<power<<"watts";

}