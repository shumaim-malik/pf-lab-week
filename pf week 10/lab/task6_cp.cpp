#include <iostream>
using namespace std;

int main(){
    cout<<" Enter a character: ";
char letter;
cin>>letter;

return 0;
}
int checkAlphabet(char letter)
{
    if (letter >= 'A' && letter <= 'Z') {
        cout << "The alphabet is Capitle" << endl;
    } else if (letter >= 'a' && letter <= 'z') {
        cout << "The The alphabet is ." << endl;
    } else {
        cout << "The character is not an alphabet letter." << endl;
    }
    return 0;
}