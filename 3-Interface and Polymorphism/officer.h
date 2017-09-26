#pragma once
#include "person.h"

class Officer : public Person
{
protected:
	int bNumber;
public:
	Officer();
	Officer(std::string name, int initHealth, int initBnumber);
	virtual void greet() override;
};