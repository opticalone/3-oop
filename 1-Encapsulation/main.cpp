#include "person.h"
#include "tv.h"
#include "piggy.h"
#include <iostream>
int main()
{
	Person hooman("michael",23, "11111");
	hooman.print();
	if (hooman.checkSoc("11111"))
	{
		std::cout << "MATHC" << std::endl;

	}
	else
	{
		std::cout << "No Match" << std::endl;

	}

	Person lemming("throttle",234, "11111");
	lemming.print();

	Person student("Andreas", 23, "11111");
	student.print();

	Person potato;
	potato.name= "potato";
	potato.age = 3;
	potato.print();

	/*Telev vizio(4, 12);
	vizio.print();*/


	Piggy wallet;
	wallet.deposit(3.50);
	std::cout << wallet.balance() << std::endl;
	std::cout << wallet.withdraw() << std::endl;
	


	while (true) {}

}