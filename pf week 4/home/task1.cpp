#include <iostream>
using namespace std;

main()
{
   string countryname;
   int ticketprice ;
   int discount;

   cout <<" Enter the country name :";
   cin >>countryname;

   cout <<" Enter the pricr of ticket :";
   cin>> ticketprice;

   discount=ticketprice*0.05;
   if(countryname == "ireland"){
    discount=ticketprice*0.1;

    cout <<"discount price is : "<<discount;
   }
   else
   {
    cout <<" discount price is : "<<discount;
   }


}