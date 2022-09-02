#include "Seller.h"
#include "Product.h"
#include "Product.cpp"
#include <string>
#include <assert.h>
#include <vector>

using namespace std;



vector<signup>sign_up;
signup s1;
void Seller::sign_up_func()
{

	cout << " Enter your ID:\n ";
	cin >> s1.seller_ID;
	cout << "\n Enter your User name:\n ";
	cin >> s1.seller_name;
	cout << "\n Enter your E-mail:\n ";
	cin >> s1.seller_email;
	cout << "\n Enter your Password:\n ";
	cin >> s1.seller_password;  

	sign_up.push_back(s1);
	cout << "\n\t\t\t    You Have Signed Up Successfully\n";


}


void Seller::sign_in_func()
{

	int foundeduser = -1;
	string susername, spassword;
	cout << "\n Enter Your Username:\n ";
	cin >> susername;
	cout << "\n Enter Your Password:\n ";
	cin >> spassword;

	for (int i = 0; i < sign_up.size(); i++) {
		if (susername == sign_up.at(i).seller_name && spassword == sign_up.at(i).seller_password) {

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


products* p;
void Seller::add_product(vector<products>& prod)
{
	int size;
	cout << "\n Enter Number Of Products you Want to Add:\n ";
	cin >> size;
	p = new products[size];
	for (int i = 0; i < size; i++) {
		cout << "\n Enter the Category:\n ";
		cin >> p[i].category;
		cout << "\n Enter Seller ID:\n ";
		cin >> p[i].seller_ID;
		cout << "\n Enter Product ID:\n ";
		cin >> p[i].product_ID;
		cout << "\n Enter Name of the Product:\n ";
		cin >> p[i].Name;
		cout << "\n Enter Price:\n ";
		cin >> p[i].price;
		cout << "\n Enter the Amount of the Product:\n ";
		cin >> p[i].amount;

		prod.push_back(p[i]);
		cout << "\n\t\t\t    You Have Successfully Added this Product\n";
		cout << "\n\n==================================================================================================\n";


	}

}