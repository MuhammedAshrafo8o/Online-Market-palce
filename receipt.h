#pragma once
#include "Product.h"
#include <iostream> 
#include <vector>
#include <string>

using namespace std;

struct receipt1 {

	string proud_id;
	string quantity;
	int price1;

};


class receipt {

	int total_price;
	char choics;

  public:

	void display_products(vector<products>prod_cust);
	void getTotal(vector<products>prod_cust);
	void GET_recepit(vector<products>prod_cust);
};