#include <iostream>
using namespace std;

main()
{ 
  int sum =0;
  float avrage = 0;
  int number [5] = {1,2,3,4,5};
  for (int idx = 0 ; idx < 5 ; idx++)
  { 
    sum =sum + number [idx];
  }
  avrage = sum / 5;
  cout <<" sum :" << sum <<endl;
  cout <<" avrage :" << avrage <<endl;

}