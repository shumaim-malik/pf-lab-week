#include <iostream>
using namespace std;

main()
{
	double vegetablepriceperkilo;
	double fruitpriceperkilo;
	int totalveg;
	int totalfruits;
	double totalcoins;
	double earning;

	cout << " Enter the price of vegetables (in coins) : ";
	cin >>vegetablepriceperkilo;

	cout << " Enter the price of fruits : ";
	cin>>fruitpriceperkilo;

	cout << " Enter total kilograms of vegetables : ";
	cin>>totalveg;

	cout << " Enter total kilograms of fruits : ";
	cin>>totalfruits;
	
	totalcoins=(vegetablepriceperkilo*totalveg)+(fruitpriceperkilo*totalfruits);
	earning=totalcoins/1.94;

	cout << " Total earning in rupees is : $"<<earning;



}