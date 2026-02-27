#include <iostream>
using namespace std ;
 
main()
{
	float aggregate;
	cout<< " Enter your name : ";
	string name ;
	cin >> name;
	cout <<" Enter matriculation marks : ";
	int matric;
	cin >> matric;
	cout << " Enter intermidiate marks : ";
	int inter ;
	cin >> inter;
	cout << " Enter ECAT marke : ";
	float ecat;
	cin >> ecat;
	aggregate=(matric/1100*100)+(inter/550*100)+(ecat/400*100);
	cout << " Aggregate score for "<<name<<" is"<<aggregate; 
}