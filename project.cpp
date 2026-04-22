#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    // total items
    int Index = 1500;
    int total_item = 0;

    // data stucture
    string names[Index];
    int size[Index];
    string colour[Index];
    float quantity[Index];
    float price[Index];

    string staffname[Index];
    int age[Index];
    int year[Index];
    int salary[Index];

    int revenue = 0;
    int shope_expences = 0;
    int net = 0;

    string order[Index];
    int total_order = 0;

    float supplydue = Index;
    int itemsoldtoday = 0;
    float dailyrevenue = 0;

    while (true)
    {
        // header of website.
        system("cls");
        cout << endl;
        cout << "===============================================================" << endl;
        cout << "                      ---NEW BOSS SHOES---                     " << endl;
        cout << "===============================================================" << endl;

        // user information
        cout << "----USER MENU----" << endl;
        cout << "1 : Admin. " << endl;
        cout << "2 : Staff. " << endl;
        cout << "3 : Coustmer. " << endl;
        cout << "4 : To exit. " << endl;
        cout << "Choose option. " << endl;

        string user_option;
        cin >> user_option;

        cout << " You choose " << user_option << endl;
        if (user_option == "1")
        {
            // admin code
           // system("cls");
            for (int i = 0; i < 3; i++)
            {
                cout << endl;
                cout << "Admin menu : Login attempt  " << i + 1 << endl;
                cout << "Enter uesrname :";
                string username;
                cin >> username;
                cout << "Enter password :";
                string password;
                cin >> password;
                if (username == "admin" && password == "1234")
                {
                    // login info
                    cout << "Login successfully "<<endl;

                    while (true)
                    {
                        //system("cls");
                        cout << "1.  Add new stock " << endl;
                        cout << "2.  Inventory report " << endl;
                        cout << "3.  Salesman report " << endl;
                        cout << "4.  Financial report " << endl;
                        cout << "5.  Shop expensice  " << endl;
                        cout << "6.  Coustmer order " << endl;
                        cout << "7.  Discount control " << endl;
                        cout << "8.  supplier managment " << endl;
                        cout << "9.  Stock addit " << endl;
                        cout << "10. System reset " << endl;
                        cout << "11. Logout " << endl;
                        cout << "Choose the option " << endl;
                        string adminoption;
                        cin >> adminoption;

                        if (adminoption == "1")
                        {
                            // new stock
                           cout << "How many article you want to enter? ";
                            int n;
                             cin >> n;
                        for (int i = 0; i < n; i++) {
                            cout << "Item " << total_item + 1 << " Name: ";
                            cin >> names[total_item];
                            cout << "Size: ";
                            cin >> size[total_item];
                            cout << "Price: "; 
                            cin >> price[total_item];
                            cout << "Quantity: "; 
                            cin >> quantity[total_item];
                            total_item++;

                            }    
                           
                            cout << "Artical added"<<endl;
                            
                            getch();
                        }
                        else if (adminoption == "2")
                        {
                            // stock cheaq
                           
                            for (int i = 0; i < total_item - 1; i++)
                             {
                               for (int j = i + 1; j < total_item; j++) {
                                 if (price[i] > price[j]) {
                                    // Swap Prices
                                    float tempPrice = price[i];
                                    price[i] = price[j];
                                    price[j] = tempPrice;
                                    // Swap Names (to keep data aligned)
                                    string tempName = names[i];
                                    names[i] = names[j];
                                    names[j] = tempName;
                                    // Swap Stock
                                    float tempquantity = quantity[i];
                                    quantity[i] = quantity[j];
                                    quantity[j] = tempquantity;

                                    int tempsize = size[i];
                                    size[i] = size[j];
                                    size[j] = tempsize;

                                    string tempcolour = colour[i];
                                    colour[i] = colour[j];
                                    colour[j] = tempcolour;

                                }
                               }
                            }
                             cout << "\n--- INVENTORY (Sorted by Price) ---\n";
                            for(int i=0; i<total_item; i++)
                            cout << i+1 << ". " << names[i] << " - Rs." << price[i] << " (Stock: " << quantity[i] << ")\n";
                        
                            total_item++;
                            getch();
                        }  
                        else if (adminoption == "3")
                        {
                            // salesman report
                            cout << "Staff name\nAge\nExperence\nSalary" << endl;
                            for (int i = 0; i < total_item; i++)
                            {
                                if (staffname[i] != "")
                                {
                                    cout << staffname[i] << "\t"<< age[i] << "\t"<< year[i] << "\t" << salary[i] << endl;
                                }
                            }
                             getch();
                        }
                        else if (adminoption == "4")
                        {
                            // Financial report

                            cout << "revenue : rs";
                            cin >> revenue;
                            cout << "Shop expenses : rs";
                            cin >> shope_expences;

                            net = revenue - shope_expences;
                             getch();
                        }

                        else if (adminoption == "5")
                        {
                            // shop expenses
                            float exp;
                            cout << "Enter total expence of shop ";
                            cin >> exp;

                            shope_expences += exp;

                            cout << "Expences update";
                             getch();
                        }
                        else if (adminoption == "6")
                        {
                            // coustmer log

                            cout << "--coustmer loges--";
                            if (total_order == 0)
                            {
                                cout << "No order";
                            }
                            else
                            {
                                for (int i = 0; i < total_order; i++)
                                {
                                    cout << " " << order[i] << endl;
                                }
                            }
                             getch();
                        }
                        else if (adminoption == "7")
                        {
                            // discount control
                            int dis;
                            cout << "Set seasonal discount %";
                            cin >> dis;
                            cout << "Discount off" << dis << " % applied to tags ." << endl;
                             getch();
                        }
                        else if (adminoption == "8")
                        {
                            // supply dues
                            cout << " Supplies dues  : rs" << supplydue << "pay amount : ";
                            float pay;
                            cin >> pay;
                            supplydue -= pay;
                             getch();
                        }
                        else if (adminoption == "9")
                        {
                            // stock audit
                            cout << "--Storage alert--";
                            for (int i = 0; i < total_item; i++)
                            {
                                if (quantity[i] < 500)
                                {
                                    cout << "low stock " << names[i] << endl;
                                }
                            }
                             getch();
                        }
                        else if (adminoption == "10")
                        {
                            // reset
                            total_item = 0;
                            total_order = 0;
                            cout << "Database reset completly";
                             getch();
                        }
                        else if (adminoption == "11")
                        {
                            break;
                        }
                        else
                        {
                            cout << "Wrong option selected " << endl;
                        }
                        cout << "\n Press 0 to back \n";
                        getch();
                    }
                }
            }
        }
        else if (user_option == "2")
        {
            // salesman module
            system("cls");
            for (int i = 0; i < 3; i++)
            {
                cout << endl;
                cout << "Staff menu : Login attempt  " << i + 1 << endl;
                cout << "Enter uesrname :";
                string username;
                cin >> username;
                cout << "Enter password :";
                string password;
                cin >> password;
                if (username == "staff" && password == "1234")
                {
                    // login info
                    string salesopt;
                    cout << "Login successfully ";
                    while (true)
                    {
                        cout << "\n---SALESMAN DASHBOARD---" << endl;
                        cout << "1. Creat bill " << endl;
                        cout << "2. Cheak low stock  " << endl;
                        cout << "3. return exchange" << endl;
                        cout << "4. View todays sales summry " << endl;
                        cout << "5. Add couctmer feedback " << endl;
                        cout << "6. Logout " << endl;
                        cout << "Choose option " << endl;
                        cin >> salesopt;
                        if (salesopt == "1")
                        {
                            //bill creation
                            int id;
                            float discount;
                            cout << "Enter Item ID 1-" << total_item << " :";
                            cin >> id;
                            int idx = id - 1;
                            if (idx >= 0 && idx < total_item && quantity[idx] > 0)
                            {
                                cout << "Item " << names[idx] << "\tPrice :" << price[idx] << endl;
                                cout << "Enter Discount amount (RS)";
                                cin >> discount;

                                quantity[idx]--;
                                float finalprice = price[idx] - discount;
                                dailyrevenue += finalprice;
                                itemsoldtoday++;
                                
                                cout <<"---BILL GENERATED---\n";
                                cout << "Total Payable: Rs." << finalprice << "\nStock Updated.\n";
                            } else
                             { 
                                cout << "Item unavailable or wrong ID!\n"; 
                             }
                              getch();
                        }
                        else if (salesopt == "2")
                        {
                            //low stock
                            cout <<"\n Low stock items";
                             for (int i = 0; i < total_item; i++)
                            {
                                if (quantity[i] < 500)
                                {
                                    cout << "low stock " << names[i] << endl;
                                }
                                else 
                                {
                                    cout <<"Enough stock";
                                }
                            }
                             getch();
                        }
                        else if (salesopt == "3")
                        {
                            //return and exchange 
                            int id ;
                            cout <<" Return item ID " ;
                            cin >> id ; 
                            if (id > 0 && id <=total_item)
                            {
                                quantity[id-1]++;
                                cout << "Return successfull !";
                            } 
                             getch();

                        }
                        else if (salesopt == "4") 
                        {
                            //sale summry
                             cout << "\n--- TODAY'S REPORT ---" << endl;
                             cout << "Total Shoes Sold: " << itemsoldtoday<< endl;
                             cout << "Total Cash Collected: Rs." << dailyrevenue << endl;
                              getch();
                        }
                        else if (salesopt == "5") 
                        {
                            // Feedback
                            string feedback;
                            cout << "Customer's feedback : ";
                            cin.ignore();
                            getline(cin, feedback);
                            cout << "Feedback save .\n";
                             getch();
                        }
                        else if (salesopt == "6")
                        {
                            break;
                        }
                        else
                        {
                            cout <<" Access denied"<<endl;
                        }
                        getch();
                    }

                }
                cout <<"Wrong login  ";
            }
        }
        else if (user_option == "3")
        {
              // --- CUSTOMER PORTAL ---
                int custOpt;
            bool custSession = true;

            while (custSession) 
            {
                cout << "\n==========================================" << endl;
                cout << "      WELCOME TO OUR ONLINE SHOE SHOP     " << endl;
                cout << "==========================================" << endl;
                cout << "1. View All Shoes (New Arrivals)" << endl;
                cout << "2. Sort by Price (Low to High)" << endl;
                cout << "3. Search Shoes by Size" << endl;
                cout << "4. Place an Order" << endl;
                cout << "5. View My Cart/Order History" << endl;
                cout << "6. Exit Shop" << endl;
                cout << "Select Option: ";
                cin >> custOpt;

                if (custOpt == 1)
                {
                    // Simple List View
                    cout << "\n--- CURRENT COLLECTION ---" << endl;
                    for (int i = 0; i < total_item; i++)
                    {
                        if (quantity[i] > 0) 
                        {
                            cout << i + 1 << ". " << names[i] << " | Size: " << size[i]  << " | Price: Rs." << price[i] << " (Available)" << endl;
                        }
                    }

                }   
                else if (custOpt == 2) 
                {
                    // --- CUSTOMER SIDE SORTING (Sasta se Mehenga) ---
                    for (int i = 0; i < total_item - 1; i++) {
                        for (int j = i + 1; j < total_item; j++) 
                        {
                            if (price[i] > price[j]) 
                            {
                            // Swapping Price
                            float tPrice = price[i]; 
                            price[i] = price[j]; 
                            price[j] = tPrice;
                            //swaping name
                            string tName = names[i];
                            names[i] = names[j];
                            names[j] = tName;
                            //swapping size
                            int tSize = size[i];
                            size[i] = size[j]; 
                            size[j] = tSize;
                            //swaping stock
                            int tStock = quantity[i];
                            quantity[i] = quantity[j];
                            quantity[j] = tStock;
                           }
                        }
                    }
                        cout << "\n--- BUDGET FRIENDLY LIST (Sorted) ---" << endl;
                        for (int i = 0; i < total_item; i++) 
                        {
                            cout << i + 1 << ". " << names[i] << " - Rs." << price[i] << " (Size: " << size[i] << ")" << endl;
                        }

                } 
                else if (custOpt == 3) 
                {
                         // Search by Size
                        int searchSize;
                        bool found = false;
                        cout << "which size do you want? (e.g. 8, 9, 10): "; cin >> searchSize;
                        cout << "\n SIZE " << searchSize  << endl;
                        for (int i = 0; i < total_item; i++) 
                        {
                        if (size[i] == searchSize && quantity[i] > 0)
                        {
                        cout << "- " << names[i] << " | Price: Rs." << price[i] << endl;
                        found = true;
                        }
                        }
                        if (!found)
                        {
                            cout << "shoe is not avalible right now.\n";
                        }

                } 
                else if (custOpt == 4) 
                {
                    // Ordering Logic
                    int buyID;
                    cout << " Enter Item ID you want : "; 
                    cin >> buyID;
                    int idx = buyID - 1;

                    if (idx >= 0 && idx < total_item) {
                    if (quantity[idx] > 0) {
                    // Order save 
                    
                    order[total_order] = "Customer Ordered: " + names[idx] + " (Size: " + to_string(size[idx]) + ")";
                    total_order++;
                    quantity[idx]--; 
                    cout << "order conformed.\n";
                } 
                else
                {
                    cout << "order declined.\n";
                }
            } else {
                cout << "Wrong ID!\n";
            }

                } else if (custOpt == 5) {
                    // Cart View
                    cout << "\n--- YOUR RECENT ACTIVITY ---" << endl;
                    if (total_order == 0) 
                    {
                        cout << "You have not order somthing.\n";
                    }
                else 
                {
                    for (int i = 0; i < total_order; i++)
                    {    
                        cout << i + 1 << ". " << order[i] << endl;
                    }
                }

                } else 
                {
                    cout << "Thankyou for shoping!\n";
                    custSession = false;
                }
        }
    }
          
        else if (user_option == "4")
        {
            break;
        }
    }


    cout << "Thanks for using this software ";
     getch();
    return 0 ;
}