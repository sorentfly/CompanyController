#include <stdio.h>
#include <iostream>
//#include <string>
/*
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
City::~City() {}
void City::UpdatePrice		(int price) 	{ Price 	= price; 	}
void City::UpdateDiscount	(int discount) 	{ Discount 	= discount; }
void City::Print()
{
	cout<<"Town name is: "<<Name<<endl<<"Call price is: "<<Price<<endl<<"Discount is: "<<Discount<<endl;
}
* */
#include "City.h"

int main()
{
	City lol ("Kiev", 10, 10);
	lol.Print();
	lol.UpdatePrice(1);
	lol.Print();
	return 0;
}
