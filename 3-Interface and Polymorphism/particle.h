#pragma once
class BaseParticle : public GameObject
{
public:


	float x;
	float y;
	float speedX;
	float speedY;

	virtual void update() override;
	virtual void draw() override;
};