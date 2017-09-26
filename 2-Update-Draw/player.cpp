#include "player.h"
#include "sfwdraw.h"

void PLayer::update()
{
	
	if (sfw::getKey('W'))
	{
		y +=10; 
	}
	if (sfw::getKey('S'))
	{
		y-=10;
	}
	if (sfw::getKey('D'))
	{
		x+=10;
	}
	if (sfw::getKey('A'))
	{
		x-=10;
	}
}

void PLayer::draw()
{
	unsigned int imgDB = sfw::loadTextureMap("res/db.png");
	sfw::drawTexture(imgDB, x, y, 248, 320, sfw::getTime() * 350);
	/*sfw::drawCircle(x, y, 30, 12 , 0xFFB511FF);*/
}

void Player2::update()
{
	c = sfw::getMouseX();
	d = sfw::getMouseY();
	//if (sfw::getKey('L'))
	//{
	//	c += 5;
	//}
	//if (sfw::getKey('J'))
	//{
	//	c -= 5;
	//}
	//if (sfw::getKey('I'))
	//{
	//	d += 5;
	//}
	//if (sfw::getKey('K'))
	//{
	//	d -= 5;
	//}

	//x = sfw::getMouseX();
	//y = sfw::getMouseY();


}

void Player2::draw()
{
	sfw::drawCircle(c, d, 20, 12, 0x00D1B6FF);
}


void Laser::ldraw( )
{
	sfw::drawLine(startX,startY,endX,endY, 0x279F00FF);
}

void Laser::update(PLayer one, Player2 aim)
{
	startX = one.x;
	startY = one.y;

	endX = aim.c;
	endY = aim.d;


}
