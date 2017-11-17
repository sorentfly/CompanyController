#include <stdio.h>
#include <iostream>
// #include "City.h"
using namespace std;
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
