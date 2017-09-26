#include <string>
#include "GameObject.h"
#include "player.h"
#include "sfwdraw.h"


void Player::draw()
{
	unsigned int imgDB = sfw::loadTextureMap("res/db.png");
	sfw::drawTexture(imgDB, x, y, 248, 320 );
}

void Player::update()
{
	if (sfw::getKey('W'))
	{
		y += 10;
	}
	if (sfw::getKey('S'))
	{
		y -= 10;
	}
	if (sfw::getKey('D'))
	{
		x += 10;
	}
	if (sfw::getKey('A'))
	{
		x -= 10;
	}
}