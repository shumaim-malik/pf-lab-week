#include <iostream> 
using namespace std;

main()
{
	int costperpound;
	int costperfoot;

	cout <<" Enter the weight of fertilizer bad :";
	float weight;
	cin >>weight;

	cout <<" Enter the price of bags :$";
	int price;
	cin >> price;

	cout <<" Enter the area covered by bags :";
	double area;
	cin >> area;

	costperpound=price/weight;
	costperfoot=area*weight;

	cout << " Cost of fertilizer per pound is : $"<<costperpound<<endl;
	cout << " Cost of fertilizer per square foot is : $"<<costperfoot;
	
}