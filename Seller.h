#include <iostream>
#include<cstring>;
#include<string>;
#include "Product.h"
#pragma once

using namespace std;

struct signup {

	string seller_ID;
	string seller_name;
	string seller_email;
	string seller_password;

};


class Seller
{

  public:

	int curUserIndex = 0;

	void sign_up_func();
	void sign_in_func();
	void add_product(vector<products>& prod);


};