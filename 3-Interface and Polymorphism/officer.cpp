#include "officer.h"

#include <iostream>

Officer::Officer()
{
	name = "";
	health = 50;
	bNumber = 0;
}

Officer::Officer(std::string initName, int initHealth, int initBnumber)
{
	name = initName;
	health = initHealth;
	bNumber = initBnumber;
}

void Officer::greet()
{

	Person::greet();
	std::cout << "hi im officer " << name << "." << std::endl;
	std::cout << "badge num is: " << bNumber << ".";
}