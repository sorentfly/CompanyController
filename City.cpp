#include "City.h"
City::~City() {}
void City::UpdatePrice		(int price) 	{ Price 	= price; 	}
void City::UpdateDiscount	(int discount) 	{ Discount 	= discount; }
void City::Print()
{
	cout<<"|-|-|-|-|-|-|"<<
	endl<<"     City    "<<
	endl;
	
	cout<<"Town name is: "<<Name<<endl<<"Call price is: "<<Price<<endl<<"Discount is: "<<Discount<<endl;
	
	cout<<"    e n d    "<<
	endl<<"|-|-|-|-|-|-|"<<
	endl;
}
