#pragma once
#include <string>

class Person
{
protected:
	std::string name;
	int health;

public:
	Person();
	Person(std::string initName, int initHealth);

	virtual void greet();
	bool isHealthy();


};