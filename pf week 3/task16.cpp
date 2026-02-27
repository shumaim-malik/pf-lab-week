#include<iostream>
using namespace std;

main()
{
	int population;
	cout << " Enter current population of world :";
	int currentpopulation;
	cin >>currentpopulation;
	cout << " Enter the monthly birth rate :";
	int monthlybirth;
	cin >>monthlybirth;
	population=currentpopulation+monthlybirth*12*30;
	cout << " Population after three decades will be :"<<population;
}