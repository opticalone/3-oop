#include "person.h"
#include <string>
#include <iostream>
Person::Person()
{
	name = "";
	health = 100;
}

Person::Person(std::string initName, int initHealth)
{
	name = initName;
	health = initHealth;
}
void Person::greet()
{
	std::cout << " hey im: " << name << "." << std::endl;

}
bool Person::isHealthy()
{
	return health > 70;
}
