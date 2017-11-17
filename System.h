#pragma once
#ifndef SYSTEM_H
#define SYSTEM_H

#include "City.h"
#include "Dialogue.h"
#include "Customer.h"

class System
{
	private:
		Customer		Customers[100];
		City		 	Cities[100];
		Dialogue		Dialogues[100];
	public:
		System();
		~System();
		void Print();
};

#endif