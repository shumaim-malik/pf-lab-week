#include <iostream>
using namespace std;

main ()
{
  string word;

  
  cout <<"enter a word: " ;
  cin >>word;
  
   int i=0;
  while (word[i]!='\0')
  {
      i++;
  } 
  cout << " Reversed string :";
  for ( int j=i; j >0 ; j--){
    cout << word[j-1];
  } 
cout <<endl;
}
