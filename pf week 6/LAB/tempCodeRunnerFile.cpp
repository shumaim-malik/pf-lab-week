#include <iostream>
using namespace std;

main ()
{
  string word;
  char letter;
  bool isfound = false;
  cout <<"enter a word: " ;
  cin >> word;
  
  for(int i=0; word[i] != '\0'; i++)