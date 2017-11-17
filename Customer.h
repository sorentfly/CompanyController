#pragma once
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <stdio.h>
#include "Dialogue.h"
#include "City.h"
#include <iostream>
using namespace std;
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

#endif