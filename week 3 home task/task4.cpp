#include <iostream> 
using namespace std;

main()
{
	int chance;
	cout << " Enter the imposter count :";
	int impostercount;
	cin >>impostercount;

	cout << " Enter the player count :";
	int playercount;
	cin >>playercount;

	chance=100*impostercount/playercount;
	cout <<" The percentage of bing imposter is : "<<chance<<"%";


}