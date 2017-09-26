#include "box.h"
#include "sfwdraw.h"

void BoxParticles::draw()
{
	sfw::drawLine(x, y,/**/y + length, y);

}