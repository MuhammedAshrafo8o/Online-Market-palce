#pragma once
#include <cstring>
#include <string.h>
#include <string>
#include <vector>
#include "Product.h"
#include<iostream>

using namespace std;

struct signup1 {

	string ID;
	string username;
	string email;
	string password;
	string phonenum;
	string address;
	string customercart_ID;

};


struct cart
{

	string id;
	string productname;

};


class Customer

{

	int curUserIndex = 0;

  public:

	void sign_up_func();
	void sign_in_func();
	void view_all_products(vector<products>& prod);
	void search_by_category(string c, vector<products>& prod);
	void search_by_name(string n, vector<products>& prod);

};