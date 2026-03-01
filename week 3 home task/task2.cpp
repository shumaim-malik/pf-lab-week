#include <iostream>
using namespace std;

main()
{
	int frame;
	cout << " Enter the number of minutes :  ";
	int min;
	cin>>min;
	cout << " Enter frame per sec :  ";
	int sec;
	cin >>sec;
	frame=60*sec*min;
	cout << " Total number of frames : "<<frame;	 

	
}
 