#include <iostream>
#include "sfwdraw.h"
#include "player.h"

 
int main()
{
	//create a window and drawing context
	sfw::initContext(600, 600, "FuckNazis");
	unsigned int imgDB = sfw::loadTextureMap("res/db.png");

	//set background color
	sfw::setBackgroundColor(0x3C1053FF);
	PLayer me;

	me.x = 400;
	me.y = 300;

	Player2 you;
	you.c = 200;
	you.d = 100;

	Laser pew;



	//set up game loop
	while (sfw::stepContext())
	{
		//game code
	
		me.update();
		me.draw();
		
		you.update();
		you.draw();
		/*sfw::drawTexture(imgDB, 0, 0, 248, 320, sfw::getTime()*100 );*/

		if (sfw::getMouseButton (0))
		{
		pew.update(me, you);
		pew.ldraw();

		}
		


		if ( me.y > 600)
		{
			me.y = 0;
		}
		if (me.x > 600)
		{
			me.x = 0;
		}
		if (me.y < 00)
		{
			me.y =600;
		}
		if (me.x < 000)
		{
			me.x = 600;
		}

		std::cout << me.x << ", " << me.y << std::endl; 

	}

	//clean up
	sfw::termContext();
}