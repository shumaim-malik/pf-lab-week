#include <iostream>
using namespace std;

main()
{
	int final; 	 
	cout<< " Enter initial velocity (m/s) : ";
	int v;
	cin>>v;
	cout<< " Enter asseleration (m/s^2): ";
	int a;
	cin>>a;
	cout<< " Enter time (s) : ";
	int t;
	cin>>t;
	final=a*t+v;
	cout<< "final velocity (m/s) : "<<final;
	
}
 