#include <stdio.h>
#include <iostream>
// #include <string>

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
class Dialogue
{
	private:
		int				ID;
		int		 		Length;
		City			Destination;
		int				Paid;
	public:
		Dialogue(int id, int l, City d, int p) : ID(id), Length(l), Destination(d), Paid(p) {}
		~Dialogue();
		void Print();
	};
class Customer
{
	private:
		string 			Name;
		Dialogue 		Dialogues;
		City			Home;
	public:
		Customer(string n, City h, Dialogue d) : Name(n), Home(h), Dialogues(d) {}
		~Customer();
		void Print();
		void AddDialogue(Dialogue dialogue);
	};
	

City::~City() {}
void City::UpdatePrice		(int price) 	{ Price 	= price; 	}
void City::UpdateDiscount	(int discount) 	{ Discount 	= discount; }
void City::Print()
{
	cout<<"Town name is: "<<Name<<endl<<"Call price is: "<<Price<<endl<<"Discount is: "<<Discount<<endl;
}
		Dialogue::~Dialogue() {}
void 	Dialogue::Print()
{
	cout<<"|-|-|-|-|-|-|"<<
	endl<<"   Dialogue  "<<
	endl;
	
	cout<<"ID is: "<<ID<<endl<<"Call lengthis: "<<Length<<endl<<"Call to: "<<endl;
	Destination.Print();;
	cout<<"Paid: "<<Paid<<endl;
	
	cout<<"    e n d    "<<
	endl<<"|-|-|-|-|-|-|"<<
	endl;
}

		Customer::~Customer() {}
void 	Customer::AddDialogue	(Dialogue dialogue) 	{ Dialogues 	= dialogue; }
void 	Customer::Print()
{
	cout<<"|-|-|-|-|-|-|"<<
	endl<<"   Customer  "<<
	endl;
	
	cout<<"Customer name is: "<<Name<<
	endl<<"Customers dialogues: "<<endl;
	Dialogues.Print();
	cout<<"Calls from is: "<<endl;
	Home.Print();
	
	cout<<"    e n d    "<<
	endl<<"|-|-|-|-|-|-|"<<
	endl;
}

int main()
{
	City 		Kiev ("Kiev", 3, 1);
	Dialogue 	Vlad_0001 (1, 12, Kiev, 36);
	Customer 	Vladimir ("Vladimir", Kiev, Vlad_0001);
	Vladimir.Print();
	return 0;
}
