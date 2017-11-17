#pragma once
#include <stdio.h>
#include <iostream>

using namespace std;
class City
{
	private:
		string 			Name;
		int 			Price;
		int				Discount;
	public:
		City(string n, int p, int d) : Name(n), Price(p), Discount(d) {}
		~City();
		void Print();
		void UpdatePrice(int price);
		void UpdateDiscount(int discount);
};
