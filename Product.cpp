#include "Product.h"
#include<iostream>
using namespace std;
Product::Product()
{
}

Product::Product(int id,int quantity,string productname,string description,double price)
{	
	this->id=id;
	this->productname=productname;
	this->description=description;
	this->price=price;
	this->quantity=quantity;
}

Product::~Product()
{
	
}
