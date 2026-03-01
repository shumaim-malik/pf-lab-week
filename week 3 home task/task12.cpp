#include <iostream>
using namespace std ;

main()
{
	cout <<" Enter the number of meters you can paint : ";
	int meters;
	cin>>meters;

	cout <<" Enter the width of single wall : ";
	int width;
	cin >>width;

	cout <<" Enter the hight of single wall : ";
	int height;
	cin>>height;

	int numberofwall;
	numberofwall=meters/(width*height);

	cout<<" Number of walls you can paint is : "<<numberofwall;
}
