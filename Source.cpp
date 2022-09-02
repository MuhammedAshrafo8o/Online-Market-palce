#include <iostream>
#include"Seller.h"
#include "Customer.h"
#include "receipt.h"
#include<string>

using namespace std;

vector<products>prod;
vector<products>prod_cust;

int foundeduser = -1;
int m;
int number;
int numberOfItems = 0;
int n;
bool check = false;

Seller  newseller;
Customer newcustomer;
receipt newreceipt;

void Choose();
void main2();

// Choosing To Sign up or in  
int main()
{

    while (true)
    {

        int choise1;
        int choise2;

        cout << "\n\n\n\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n" << endl;
        cout << "\t\t\t\t    HELLO IN OUR ONLINE MARKETPLACE MANAGMENT SYSTEM\n" << endl;
        cout << "\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n" << endl;
        cout << "\n\n How Do You Want To Register ? ( Choose 1 or 2 )\n\n";
        cout << "\t1- As a Seller \t\t 2- As a Customer\n";
        cout << "\n--->>> ";
        cin >> choise1;

        // As a Seller
        if (choise1 == 1)
        {
            cout << "\n\n==================================================================================================\n";
            cout << "\n\t\t\t    Entiring to Our System\n";
            cout << "\n Do You Want to Sign Up or Sign In or Exit? ( Choose 1 or 2 or 3 )\n\n";
            cout << "\t1- Sign Up \t 2- Sign In \t 3- EXIT\n ";
            cout << "\n--->>> ";
            cin >> choise2;

            // Sign up as a Seller
            if (choise2 == 1) {
                cout << "\n\n==================================================================================================\n";
                cout << "\n\t\t\t    HELLO, Please Fill your Data to Sign Up\n\n" << endl;
                newseller.sign_up_func();

                cout << "\n\n==================================================================================================\n";
                cout << "\n\t\t\t    Now You Can Add new Products\n\n";
                newseller.add_product(prod);

            }

            // Sign in as a Seller
            else if (choise2 == 2) {
                cout << "\n\n==================================================================================================\n";
                cout << "\n\t\t\t    HELLO, Please Enter your Data to Sign in \n" << endl;
                newseller.sign_in_func();

                cout << "\n\n==================================================================================================\n";
                cout << "\n\t\t\t    Now You Can Add new Products\n\n";
                newseller.add_product(prod);
            }

        }

        // As a Customer
        else if (choise1 == 2)
        {
            cout << "\n\n==================================================================================================\n";
            cout << "\n\t\t\t    Entiring to Our System\n";
            cout << "\n Do You Want to Sign Up or Sign In or Exit? ( Choose 1 or 2 or 3 )\n\n";
            cout << "\t\t1- Sign Up \t 2- Sign In \t 3- EXIT\n ";
            cout << "\n--->>> ";
            cin >> choise2;

            // Sign up as a Customer
            if (choise2 == 1)
            {
                cout << "\n\n==================================================================================================\n";
                cout << "\n\t\t\t    HELLO, Please Fill your Data to Sign Up \n" << endl;
                newcustomer.sign_up_func();
                main2();


            }

            // Sign in as a Customer 
            else if (choise2 == 2) {
                cout << "\n\n==================================================================================================\n";
                cout << "\n\t\t\t    HELLO, Please Enter your Data to Sign In \n" << endl;
                newcustomer.sign_in_func();
                main2();



            }


        }
    }

    return 0;
};

// Choosing How to Complete the Buying Process
void Choose() {

    int id;
    cout << "\n\n==================================================================================================\n";
    cout << "\n\t\t\t    Adding Products to Your Cart\n";
    cout << "\n Pleasse Enter the ID of the Product you want to buy:\n ";
    cin >> id;
    bool found = false;

    for (int i = 0; i < prod.size(); i++)
    {
        if (id == prod.at(i).product_ID) {

            found = true;
        }
        else
            continue;


        cout << "\n Please Enter the Quantity you Want to Buy from this Product:\n ";
        cin >> prod.at(i).quant;
        if (prod.at(i).quant > prod.at(i).amount)
            cout << "\n\t\t\t    Not Available Quantity\n" << endl;
        else if (prod.at(i).quant <= prod.at(i).amount)
        {

            prod_cust.push_back(prod.at(i));
            int choise;
            cout << "\n\n\t\t\t    You Have Successfully Added Products to your Cart\n";
            cout << "\n\n==================================================================================================\n";
            cout << "\n How do you Want to Confirm Buying the Products ? ( Choose 1 or 2 or 3)\n\n";

            cout << "\t1- Disblay Total Price \t  2- Display All Receipt Information \t 3- Display Cart Products\n ";
            cout << "\n--->>> ";
            cin >> choise;

            // Display Total Price
            if (choise == 1) {
                cout << "\n\n==================================================================================================\n";
                cout << "\n Your Total Price With 30 EGP for Shipment Price is:\n ";
                newreceipt.getTotal(prod_cust);

            }

            // Display Receipt Information
            else if (choise == 2) {
                cout << "\n\n==================================================================================================\n";
                newreceipt.GET_recepit(prod_cust);
            }

            // Display Cart Products Information
            else if (choise == 3)
            {
                cout << "\n\n==================================================================================================\n";
                newreceipt.display_products(prod_cust);
            }
        }

        break;

    }

    if (found == false)
    {

        cout << "\n\t\t\t    Please Enter a Valid Product ID\n";
    }

    else {
        cout << "\n\n==================================================================================================\n";
        cout << "\n What is the Next Operation you want to do ? ( Choose 1 or 2 )\n\n";
        cout << "\t\t1- Select Another Product \t 2- Back\n";
        int  c;
        cout << "\n--->>> ";
        cin >> c;
        cout << "\n\n==================================================================================================\n";
        if (c == 2) {
            check = true;


        }


    }


};

// Choosing How to Search for Products
void main2() {

    check = false;
    bool check2 = false;

    while (!check2)
    {
        int choise3;
        cout << "\n\n==================================================================================================\n";
        cout << "\n How do You want to Search for Products ? ( Choose 1 or 2 or 3 )\n\n";
        cout << "\t1- Disblay All Products \t2- Search by Category \t  3- Search by Name \t 4-Logout\n ";
        cout << "\n--->>> ";
        cin >> choise3;

        // Displaying All Products
        if (choise3 == 1) {
            cout << "\n\n==================================================================================================\n";
            check = false;
            while (!check)
            {
                newcustomer.view_all_products(prod);
                Choose();
                if (check) {

                    break;
                }

            }

        }

        // Serch by Category
        else if (choise3 == 2) {
            string c;
            cout << "\n\n==================================================================================================\n";

            cout << "\n Enter the Category you want to Search about: \n ";
            cin >> c;

            check = false;
            while (!check)
            {
                newcustomer.search_by_category(c, prod);
                Choose();
                if (check) {

                    break;
                }

            }

        }

        // Search by Name
        else if (choise3 == 3) {

            string n;
            cout << "\n\n==================================================================================================\n";
            cout << "\n Enter the Name you want to Search about: \n ";
            cin >> n;

            check = false;
            while (!check)
            {
                newcustomer.search_by_name(n, prod);
                Choose();
                if (check) {

                    break;
                }

            }

        }

        // Logging Out
        else if (choise3 == 4)
            break;
        else {
            cout << "\n\t\t\t    Not Available .. Please Try Again !!\n\n";
        }
    }
    prod_cust.clear();
};