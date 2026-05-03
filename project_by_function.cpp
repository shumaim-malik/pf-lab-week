#include <iostream>
#include <conio.h>
using namespace std;

// CONSTANT 
const int Index = 1500;

// GLOBAL ARRAYS 

// Product Data
string names[Index];
int sizes[Index];
string colours[Index];
float quantities[Index];
float prices[Index];

// Staff Data
string staffname[Index];
int age[Index];
int year[Index];
int salary[Index];

// Orders
string orders[Index];

// GLOBAL VARIABLES

int total_item = 0;
int total_order = 0;

float dailyrevenue = 0;
int itemsoldtoday = 0;

int revenue = 0;
int shop_expenses = 0;
int netprofit = 0;

float supplydue = 1500;

//  HEADER 

void header()
{
    system("cls");

    cout << "=====================================================\n";
    cout << "                --- NEW BOSS SHOES ---               \n";
    cout << "=====================================================\n";
}

//  LOGIN FUNCTIONS 

bool adminLogin()
{
    string username, password;

    cout << "\nEnter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    if (username == "admin" && password == "1234")
    {
        return true;
    }

    return false;
}

bool staffLogin()
{
    string username, password;

    cout << "\nEnter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    if (username == "staff" && password == "1234")
    {
        return true;
    }

    return false;
}

//  ADD STOCK 

void addStock()
{
    int n;

    cout << "\nHow many items you want to add: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "\nItem " << total_item + 1 << endl;

        cout << "Name: ";
        cin >> names[total_item];

        cout << "Size: ";
        cin >> sizes[total_item];

        cout << "Colour: ";
        cin >> colours[total_item];

        cout << "Price: ";
        cin >> prices[total_item];

        cout << "Quantity: ";
        cin >> quantities[total_item];

        total_item++;
    }

    cout << "\nItems Added Successfully!\n";
}

//  INVENTORY REPORT 

void inventoryReport()
{
    cout << "\n=========== INVENTORY REPORT ===========\n";

    for (int i = 0; i < total_item; i++)
    {
        cout << "\nID: " << i + 1;
        cout << "\nName: " << names[i];
        cout << "\nSize: " << sizes[i];
        cout << "\nColour: " << colours[i];
        cout << "\nPrice: Rs." << prices[i];
        cout << "\nQuantity: " << quantities[i] << endl;
    }
}

//  SORTING 

void sortByPrice()
{
    for (int i = 0; i < total_item - 1; i++)
    {
        for (int j = i + 1; j < total_item; j++)
        {
            if (prices[i] > prices[j])
            {
              // Swap Prices
                                    float tempPrice = prices[i];
                                    prices[i] = prices[j];
                                    prices[j] = tempPrice;
                                    // Swap Names (to keep data aligned)
                                    string tempName = names[i];
                                    names[i] = names[j];
                                    names[j] = tempName;
                                    // Swap Stock
                                    float tempquantity = quantities[i];
                                    quantities[i] = quantities[j];
                                    quantities[j] = tempquantity;

                                    int tempsize = sizes[i];
                                    sizes[i] = sizes[j];
                                    sizes[j] = tempsize;

                                    string tempcolour = colours[i];
                                    colours[i] = colours[j];
                                    colours[j] = tempcolour;
            }
        }
    }

    cout << "\nItems Sorted Successfully!\n";
}

// SEARCH 

void searchBySize()
{
    int searchSize;
    bool found = false;

    cout << "\nEnter Size: ";
    cin >> searchSize;

    cout << "\n===== AVAILABLE SHOES =====\n";

    for (int i = 0; i < total_item; i++)
    {
        if (sizes[i] == searchSize && quantities[i] > 0)
        {
            cout << i + 1 << ". ";
            cout << names[i];
            cout << " | Price: Rs." << prices[i];
            cout << " | Colour: " << colours[i] << endl;

            found = true;
        }
    }

    if (!found)
    {
        cout << "No Shoe Found!\n";
    }
}

// ORDERING 

void placeOrder()
{
    int id;

    cout << "\nEnter Item ID: ";
    cin >> id;

    int idx = id - 1;

    if (idx >= 0 && idx < total_item)
    {
        if (quantities[idx] > 0)
        {
            quantities[idx]--;

            orders[total_order] =
                names[idx] + " Size: " +
                to_string(sizes[idx]);

            total_order++;

            cout << "\nOrder Confirmed!\n";
        }
        else
        {
            cout << "\nItem Out Of Stock!\n";
        }
    }
    else
    {
        cout << "\nInvalid ID!\n";
    }
}

// ORDER REPORT

void orderReport()
{
    cout << "\n=========== ORDER HISTORY ===========\n";

    if (total_order == 0)
    {
        cout << "No Orders Yet!\n";
    }
    else
    {
        for (int i = 0; i < total_order; i++)
        {
            cout << i + 1 << ". ";
            cout << orders[i] << endl;
        }
    }
}

// BILL CREATION 

void createBill()
{
    int id;
    float discount;

    cout << "\nEnter Item ID: ";
    cin >> id;

    int idx = id - 1;

    if (idx >= 0 && idx < total_item &&
        quantities[idx] > 0)
    {
        cout << "\nItem: " << names[idx];
        cout << "\nPrice: Rs." << prices[idx];

        cout << "\nDiscount: ";
        cin >> discount;

        float finalprice = prices[idx] - discount;

        quantities[idx]--;

        dailyrevenue += finalprice;
        itemsoldtoday++;

        cout << "\n========== BILL ==========\n";
        cout << "Final Price: Rs." << finalprice << endl;
    }
    else
    {
        cout << "\nItem Unavailable!\n";
    }
}

//  LOW STOCK 

void lowStock()
{
    cout << "\n=========== LOW STOCK ===========\n";

    for (int i = 0; i < total_item; i++)
    {
        if (quantities[i] < 5)
        {
            cout << names[i] << endl;
        }
    }
}

//  SALES SUMMARY 

void salesSummary()
{
    cout << "\n=========== SALES SUMMARY ===========\n";

    cout << "Total Items Sold: ";
    cout << itemsoldtoday << endl;

    cout << "Total Revenue: Rs.";
    cout << dailyrevenue << endl;
}

// FEEDBACK 

void customerFeedback()
{
    string feedback;

    cin.ignore();

    cout << "\nEnter Feedback: ";
    getline(cin, feedback);

    cout << "\nFeedback Saved Successfully!\n";
}

//  FINANCIAL REPORT 

void financialReport()
{
    cout << "\nEnter Revenue: ";
    cin >> revenue;

    cout << "Enter Shop Expenses: ";
    cin >> shop_expenses;

    netprofit = revenue - shop_expenses;

    cout << "\nNet Profit: Rs.";
    cout << netprofit << endl;
}

//  SHOP EXPENSES 

void addExpenses()
{
    float exp;

    cout << "\nEnter Expense Amount: ";
    cin >> exp;

    shop_expenses += exp;

    cout << "\nExpense Added Successfully!\n";
}

//  SUPPLIER MANAGEMENT 

void supplierManagement()
{
    float pay;

    cout << "\nSupply Due: Rs." << supplydue;

    cout << "\nEnter Payment: ";
    cin >> pay;

    supplydue -= pay;

    cout << "\nRemaining Due: Rs." << supplydue << endl;
}

// STOCK AUDIT 

void stockAudit()
{
    cout << "\n=========== STOCK AUDIT ===========\n";

    for (int i = 0; i < total_item; i++)
    {
        if (quantities[i] < 5)
        {
            cout << names[i] << " LOW STOCK!\n";
        }
    }
}

//  RESET SYSTEM 

void resetSystem()
{
    total_item = 0;
    total_order = 0;

    cout << "\nSystem Reset Successfully!\n";
}

// ADMIN MENU 

void adminMenu()
{
    string option;

    while (true)
    {
        header();

        cout << "\n=========== ADMIN MENU ===========\n";

        cout << "1. Add Stock\n";
        cout << "2. Inventory Report\n";
        cout << "3. Financial Report\n";
        cout << "4. Shop Expenses\n";
        cout << "5. Customer Orders\n";
        cout << "6. Supplier Management\n";
        cout << "7. Stock Audit\n";
        cout << "8. Reset System\n";
        cout << "9. Logout\n";

        cout <<"Enter opption";
        cin >> option;

        if (option == "1")
            addStock();

        else if (option == "2")
        {
            sortByPrice();
            inventoryReport();
        }

        else if (option == "3")
            financialReport();

        else if (option == "4")
            addExpenses();

        else if (option == "5")
            orderReport();

        else if (option == "6")
            supplierManagement();

        else if (option == "7")
            stockAudit();

        else if (option == "8")
            resetSystem();

        else if (option == "9")
            break;

        else
            cout << "\nInvalid Option!\n";

        getch();
    }
}

//  STAFF MENU 

void staffMenu()
{
    string option;

    while (true)
    {
        header();

        cout << "\n=========== STAFF MENU ===========\n";

        cout << "1. Create Bill\n";
        cout << "2. Low Stock\n";
        cout << "3. Sales Summary\n";
        cout << "4. Customer Feedback\n";
        cout << "5. Logout\n";

        cout<<"Enter option";
        cin >> option;

        if (option == "1")
            createBill();

        else if (option == "2")
            lowStock();

        else if (option == "3")
            salesSummary();

        else if (option == "4")
            customerFeedback();

        else if (option == "5")
            break;

        else
            cout << "\nInvalid Option!\n";

        getch();
    }
}

// CUSTOMER MENU 

void customerMenu()
{
    int option;

    while (true)
    {
        header();

        cout << "\n=========== CUSTOMER MENU ===========\n";

        cout << "1. View Shoes\n";
        cout << "2. Sort By Price\n";
        cout << "3. Search By Size\n";
        cout << "4. Place Order\n";
        cout << "5. View Orders\n";
        cout << "6. Exit\n";

        cout<<"Enter option";
        cin >> option;

        if (option == 1)
            inventoryReport();

        else if (option == 2)
        {
            sortByPrice();
            inventoryReport();
        }

        else if (option == 3)
            searchBySize();

        else if (option == 4)
            placeOrder();

        else if (option == 5)
            orderReport();

        else if (option == 6)
            break;

        else
            cout << "\nInvalid Option!\n";

        getch();
    }
}

//  MAIN FUNCTION 

int main()
{
    while (true)
    {
        header();

        string option;

        cout << "\n=========== MAIN MENU ===========\n";

        cout << "1. Admin\n";
        cout << "2. Staff\n";
        cout << "3. Customer\n";
        cout << "4. Exit\n";

        cout << "\nChoose Option: ";
        cin >> option;

        // ADMIN
        if (option == "1")
        {
            if (adminLogin())
            {
                adminMenu();
            }
            else
            {
                cout << "\nWrong Login!\n";
                getch();
            }
        }

        // STAFF
        else if (option == "2")
        {
            if (staffLogin())
            {
                staffMenu();
            }
            else
            {
                cout << "\nWrong Login!\n";
                getch();
            }
        }

        // CUSTOMER
        else if (option == "3")
        {
            customerMenu();
        }

        // EXIT
        else if (option == "4")
        {
            break;
        }

        else
        {
            cout << "\nInvalid Option!\n";
            getch();
        }
    }

    cout << "\nThank You For Using Software!\n";

    return 0;
}