#include <iostream>
using namespace std;

main()
{
   int redrose,whiterose,tulip;
   float price;

    
   cout <<" Enter the amount of Red Rose :";
   cin>>redrose;

   cout <<" Enter the amount of White Rose :";
   cin>>whiterose;

   cout <<" Enter the amount of Tulip :";
   cin>>tulip;

   price=(redrose*2.00)+(whiterose*4.10)+(tulip*2.50);
   cout <<" Orignal price :"<< price<<endl;  
   if (price > 200){
    float discount=price-price*0.2;
    cout<<" price after discount is: "<<discount;
   }



}