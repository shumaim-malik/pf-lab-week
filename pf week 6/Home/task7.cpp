#include <iostream>
using namespace std;

main()
{
   int num;
    

    cout << fixed ;

    cout << "Enter number of products: ";
    cin >> num;

    string names[num];
    double prices[num];
    int quantities[num];

   
    for (int i = 0; i < num; i++) {
        cout << "\nEnter name of product " << (i + 1) << ": ";
        cin >> names[i];

        cout << "Enter price of " << names[i] << ": $";
        cin >> prices[i];

        cout << "Enter quantity of " << names[i] << ": ";
        cin >> quantities[i];
    }

    cout << "\nProduct Inventory Report" << endl;
    cout << "------------------------" << endl;

    for (int i = 0; i < num; i++) {
        double totalValue = prices[i] * quantities[i];
        
        cout << names[i] << ": $" << prices[i] << ", " 
             << quantities[i] << " in stock, Total value: $" 
             << totalValue << endl;
    }

   

}
