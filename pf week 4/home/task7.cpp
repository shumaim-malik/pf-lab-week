#include <iostream>
using namespace std;

main()
{
  string figure;
  double s , area;

  cout <<" Enter the geometric figure ";
  cin>> figure;

  if (figure == "square"){
    cout <<" Enter the size of figure :";
    cin >>s;
    area=s*s;
    
    cout<<" Area is :"<<area;

  }

   if (figure == "rectangle"){
    cout <<" Enter the size of figure :";
    cin >>s;
    double s2;
    cin>>s2;

    area=s*s2;

    cout<<" Area is :"<<area;

  }
   
  if (figure== "circle"){
    cout <<" Enter the size of figure :";
    cin >>s;
    

    area=3.14*s*s;

    cout<<" Area is :"<<area;

  }

  if (figure == "triangle"){
    cout <<" Enter the size of figure :";
    cin >>s;
    double s2;
    cin>>s2;

    area=0.5*s*s2;

    cout<<" Area is :"<<area;

  }
  
}