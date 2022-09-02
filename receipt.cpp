#include "receipt.h"
#include "product.h"
#include <cstring>
#include <string.h>
#include <string>
#include <vector>
#include<iostream>


vector<receipt1> rec;
int shipment_price = 30;
receipt1 r;

void receipt::display_products(vector<products>prod_cust)
{

	cout << "\n\n All Cart Products:\n\n";
	for (int i = 0; i < prod_cust.size(); i++)
	{
		cout << "\n Product ID:\n " << prod_cust.at(i).product_ID;
		cout << "\n\n Product Name:\n " << prod_cust.at(i).Name;
		cout << "\n\n Price of Product:\n " << prod_cust.at(i).price;
		cout << "\n\n Available Product Quantity:\n " << prod_cust.at(i).amount;
		cout << "\n\n The Ordered Quantity:\n " << prod_cust.at(i).quant;
		cout << "\n\n Seller ID:\n " << prod_cust.at(i).seller_ID;
		cout << "\n\n";
		cout << "\n***************************************\n";

	}

}


void receipt::getTotal(vector<products>prod_cust)
{

	for (int i = 0; i < prod_cust.size(); i++)
	{
		total_price += prod_cust.at(i).price * prod_cust.at(i).quant;
	}
	cout <<"the total price " <<total_price + shipment_price << endl;

}

void receipt::GET_recepit(vector<products>prod_cust) {


	int total = 0;
	cout << "\n\n All Receipt Information:\n\n";
	for (int i = 0; i < prod_cust.size(); i++) {
		total_price = 0;
		cout << "\n Product ID:\n " << prod_cust.at(i).product_ID;
		cout << "\n\n Product Name:\n " << prod_cust.at(i).Name;
		cout << "\n\n Price of Product:\n " << prod_cust.at(i).price;
		cout << "\n\n Available Product Quantity:\n " << prod_cust.at(i).amount;
		cout << "\n\n Seller ID:\n " << prod_cust.at(i).seller_ID;
		cout << "\n\n The Ordered Quantity:\n "<<prod_cust.at(i).quant;
		total_price = prod_cust.at(i).price * prod_cust.at(i).quant;
		cout << "\n\n Total Price of Products:\n " << total_price;
		cout << "\n\n";
		cout << "\n***************************************\n";

		total += total_price;
		
		
	}
	cout << "\n\n Shipment Price:\n " << shipment_price << endl;
	cout << "\n Total Price With 30 EGP for Shipment Price is:\n " << total + shipment_price << endl;
	
}