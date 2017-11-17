#include "System.h"
System::~System() {}
System::System() 
{
    Customers[0] = new Customer();
}
void 	System::Print()
{
    cout<<"|-|-|-|-|-|-|-|-|-|"<<
	endl<<"   System itself  "<<
	endl;
	
	
	
	cout<<"     e   n   d     "<<
	endl<<"|-|-|-|-|-|-|-|-|-|"<<
	endl;
}
