#ifndef PRODUCT_H
#define PRODUCT_H
#include<iostream>
using namespace std;


class Product
{
	private:
		int id,quantity;
		string productname,description;
		double price;
	public:
		Product();
		Product(int id,int quantity,string productname,string description,double price);
		
		
		int getid()
		{
			return id;
		}
		void setid( int id)
		{
			this->id=id;
		}
		
		int getquantity()
		{
			return quantity;
		}
		void setquantity( int quantity)
		{
			this->quantity=quantity;
		}
		
		string getproductname()
		{
			return productname;
		}
		void setproductname( string productname)
		{
			this->productname=productname;
		}
		
		string getdescription()
		{
			return description;
		}
		void setdescription( string description)
		{
			this->description=description;
		}
		
		double getprice()
		{
			return price;
		}
		void setprice( double price)
		{
			this->price=price;
		}
		
		
		
		
		~Product();
	protected:
};

#endif
