#include "includes.h"


int main()
{
	City 		Kiev ("Kiev", 3, 1);
	Dialogue 	Vlad_0001 (1, 12, Kiev, 36);
	Customer 	Vladimir ("Vladimir", Kiev, Vlad_0001);
	Vladimir.Print();
	return 0;
}
