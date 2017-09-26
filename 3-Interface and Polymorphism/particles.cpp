#include "particle.h"
#include "sfwdraw.h"

void BaseParticle::draw()
{
unsigned int imgDB = sfw::loadTextureMap("res/eye.png");
	sfw::drawTexture(imgDB, x, y, 248, 320);
}
void BaseParticle::update()
{
	x = +speedX;
	y = +speedY;
}

void BoxParticle::draw()
{
	float halfx = 
}
