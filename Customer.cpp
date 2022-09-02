#include "Customer.h"
#include "Product.h"
#include "Product.cpp"
#include <cstring>
#include <string.h>
#include <string>
#include <vector>
#include<iostream>

using namespace std;

vector <signup1>  cust;
void Customer::sign_up_func() {

    signup1 s;
    cout << " Enter your ID:\n ";
    cin >> s.ID;
    cout << "\n Enter your Username:\n ";
    cin >> s.username;
    cout << "\n Enter your E-mail:\n ";
    cin >> s.email;
    cout << "\n Enter your Password:\n ";
    cin >> s.password;
    cout << "\n Enter your Phone Number:\n ";
    cin >> s.phonenum;
    cout << "\n Enter your Address:\n ";
    cin >> s.address;
    cout << "\n Enter your Cart ID:\n ";
    cin >> s.customercart_ID;

    cust.push_back(s);
    cout << "\n\t\t\t    You Have Signed Up Successfully\n";
}


void Customer::sign_in_func() {

    int foundeduser = -1;
    string susername, spassword;
    cout << "\n Enter Your Username:\n ";
    cin >> susername;
    cout << "\n Enter Your Password:\n ";
    cin >> spassword;

    for (int i = 0; i < cust.size(); i++) {
        if (susername == cust.at(i).username && spassword == cust.at(i).password) {

            curUserIndex = i;
            foundeduser = i;
            break;
        }
    }

    if (foundeduser == -1)
    {
        cout << "\n\t\t\t    You Haven't Signed Up Before. Please Enter your Data to Sign Up\n";
        cout << "\n\n==================================================================================================\n\n";

        this->sign_up_func();
    }
}


void Customer::view_all_products(vector<products>& prod) {
    if (prod.size() == 0)
        cout << "\n\t\t\t    There are no Products\n";
    else
    {

        cout << "\n\n All Available Products:\n\n";
        for (int i = 0; i < prod.size(); i++) {
            cout << "\n Category:\n ";
            cout << prod.at(i).category;
            cout << "\n\n Product ID:\n ";
            cout << prod.at(i).product_ID;
            cout << "\n\n Product Name:\n ";
            cout << prod.at(i).Name;
            cout << "\n\n Product price:\n ";
            cout << prod.at(i).price;
            cout << "\n\nproduct amount:\n ";
            cout << prod.at(i).amount;
            cout << "\n\n";
            cout << "***************************************\n";


        }
    }
}


void Customer::search_by_category(string c, vector<products>& prod) {

    cout << "\n\n All Available Products in this Category:\n\n";
    for (int i = 0; i < prod.size(); i++) {
        if (prod.at(i).category == c) {
            cout << "\n Category:\n ";
            cout << prod.at(i).category;
            cout << "\n\n Product ID:\n ";
            cout << prod.at(i).product_ID;
            cout << "\n\n Product Name:\n ";
            cout << prod.at(i).Name;
            cout << "\n\n Product price:\n ";
            cout << prod.at(i).price;
        }
        else
        {
            continue;
        }
    }
}


void Customer::search_by_name(string n, vector<products>& prod) {

    cout << "\n\n All Available Products with this Name:\n\n";
    for (int i = 0; i < prod.size(); i++) {
        if (prod.at(i).Name == n) {
            cout << "\n Category:\n ";
            cout << prod.at(i).category;
            cout << "\n\n Product ID:\n ";
            cout << prod.at(i).product_ID;
            cout << "\n\n Product Name:\n ";
            cout << prod.at(i).Name;
            cout << "\n\n Product price:\n ";
            cout << prod.at(i).price;
        }
        else
        {
            continue;
        }
    }
}