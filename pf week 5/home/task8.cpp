#include <iostream>
using namespace std ;
 
main ()
{
  int age , toyprice;
  double mechineprice;
  cout <<" Enter Lilly's age :";
  cin>>age ;

  cout <<" Enter the price of washing michine  :";
  cin>>mechineprice;

  cout <<" Enter the unit price of each toy  :";
  cin>>toyprice ;
  int toy=0;
  double money =0;
  int moneygift =10;
  int taken = 0 ;

  for (int i = 1 ; i <= age ; i++)
  {
    if (i % 2 == 1)
    {
      toy++;
    }
    else{
      money +=moneygift;
      taken++;
      moneygift +=10;
    }

  }

  money -= taken;
  money += toy*toyprice;

  if (money >=mechineprice)
  {
    cout <<" Yes !"<<money-mechineprice<<endl;

  }

  else{
    cout <<"No !"<<mechineprice-money;
  }
}