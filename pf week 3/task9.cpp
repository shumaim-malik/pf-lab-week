#include <iostream>
using namespace std ;
 
main()
{
	float current;
	cout << " Enter the charge (Q) in columb : ";
	float charge;
	cin >> charge;
	cout <<" Enter the time (t) in seconds : ";
	int time;
	cin >> time;
	current=charge/time;
	cout << " The current (I) is : "<<current;
}