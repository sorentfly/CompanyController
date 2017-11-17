#include "Dialogue.h"
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
