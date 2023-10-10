#ifndef PRODUCTMANAGER_H
#define PRODUCTMANAGER_H

#include "Product.h"
#include<iostream>
using namespace std;
class ProductManager
{
	public:
			
		ProductManager();
		
		static void insert ();
			
		static void updateProduct();
		
		static void display();
		
		static void delproduct();
		
		
		
		
		
		~ProductManager();
	protected:
};

#endif
