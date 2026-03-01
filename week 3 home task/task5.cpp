#include <iostream> 
using namespace std;

main()
{
	int targetdays;

	cout << " Enter your name : ";
	string name;
	cin >>name;
	
	cout << " Enter your weight loss target : ";
 	int target;
	cin >> target;

	targetdays=target*15;
	cout << " Your weight after "<<targetdays<<"days will be"<<target<<" kgs" ;

}