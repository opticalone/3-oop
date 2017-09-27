#pragma once
#include "GameObject.h"
class BaseParticle : public GameObject
{
public:



	float speedX;
	float speedY;

	virtual void update();
	virtual void draw();
};