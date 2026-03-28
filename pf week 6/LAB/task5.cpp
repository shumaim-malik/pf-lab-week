#include <iostream>
using namespace std;

main()
{ 
  int n;
  
    int number [n];
  cout << " Enter the amount of number you want to store ";
  cin >> n;

    for (int count =0 ; count <n ; count =count +1)
    {
      cout << " enter number "<<count + 1<<" :";
      cin >> number [count];
  
    }
    cout <<" \n You entered the following numbers\n ";
    for (int count =0 ; count <n ; count =count +1){
     cout<< number [count] <<"\n ";
    }

}