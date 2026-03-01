#include <iostream>
using namespace std;

main()
{
	double totalamount;
	double donationamount;
	double afterdonation;

	cout <<" Enter the name of movie :";
	string name;
	cin >>name;

	cout <<" Enter the price of adult tickets : $";
	int adulttickets;
	cin >>adulttickets;

	cout <<" Enter the price of child tickets : $";
	int childtickets;
	cin >>childtickets;

	cout <<" Enter the number of adult tickets sold : $";
	int adultticketssold;
	cin >>adultticketssold;

	cout <<" Enter the number of child tickets sold : $";
	int childticketssold;
	cin >>childticketssold;

	cout <<" Enter the percentage of the total money to donate to charity : $";
	int charity;
	cin >>charity;

	totalamount=(adultticketssold*adulttickets)+(childticketssold*childtickets);
	donationamount=totalamount*charity/100;
	afterdonation=totalamount-donationamount;
	
	cout <<"----------------------------------------------------"<<endl<<endl;
	cout <<" Movie : "<<name<<endl;
	cout <<" Total amount generated from ticket sale : $"<<totalamount<<endl;
	cout <<" Donation to charity ("<<charity<<") : $"<<donationamount<<endl;
	cout <<" Remaning amount after donation : $"<<afterdonation<<endl;








}