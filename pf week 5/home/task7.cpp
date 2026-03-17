#include <iostream>
using namespace std ;
 
main ()
{
   int n , num ;
    double p1 = 0, p2 = 0, p3 = 0, p4= 0, p5 = 0;
    cout <<" Enter numbers count ";
    cin>>n;

    for (int i = 0; i < n; i++) {
        
      cout <<" Enter number ";
        cin >> num;

        // Categorize the number based on the problem ranges
        if (num < 200) {
            p1++;
        } else if (num >= 200 && num <= 399) {
            p2++;
        } else if (num >= 400 && num <= 599) {
            p3++;
        } else if (num >= 600 && num <= 799) {
            p4++;
        } else if (num >= 800) {
            p5++;
        }
    }
    cout << endl;

    cout << (p1 / n) * 100 << "%" << endl;
    cout << (p2 / n) * 100 << "%" << endl;
    cout << (p3 / n) * 100 << "%" << endl;
    cout << (p4 / n) * 100 << "%" << endl;
    cout << (p5 / n) * 100 << "%" << endl;
 
}