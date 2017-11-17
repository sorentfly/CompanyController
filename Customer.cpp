#include "Customer.h"
#include "Dialogue.h"

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
