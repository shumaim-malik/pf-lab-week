#include <iostream>
using namespace std;

main()
{
  int holidays ;
  int workingdays,playtime,norm;

  cout <<" Enter your Holidays :";
  cin>>holidays;

  workingdays=365-holidays;
  playtime=workingdays*63+holidays*127;
  norm=30000-playtime;

  int hours=norm/60;
  int minuts=norm%60;

  if(playtime < norm){
    cout <<" Tom will run away ";
    cout <<hours<<" hours and "<<minuts<<" minuts for play";

  }
  else{
    cout <<" Tom sleep well";
    cout <<hours<<" hours and "<<minuts<<" minuts for play";
  }

}