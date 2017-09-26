#include <iostream>
#include <string>

#include "person.h"
#include "officer.h"

#include "player.h"
#include "GameObject.h"
#include "sfwdraw.h"



int main()
{
	//Person me("Michael", 50);
	//me.greet();
	//me.isHealthy();

	//Officer bo("Bo Burkleyton", 10, 23532);
	//bo.greet();
	//bo.isHealthy();
	sfw::initContext(600,600 , "SFW");
	sfw::setBackgroundColor(0xbad608FF);

Player me;
		me.x = 200;
		me.y = 200;
	
	while (sfw::stepContext())
	{
		me.draw();
		me.update();

		if (me.y > 600)
		{
			me.y = 0;
		}
		if (me.x > 600)
		{
			me.x = 0;
		}
		if (me.y < 00)
		{
			me.y = 600;
		}
		if (me.x < 000)
		{
			me.x = 600;
		}
	}


	sfw::termContext();

}