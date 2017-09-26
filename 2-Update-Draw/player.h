#pragma once
class PLayer
{
public:
	float x;
	float y;

	void update();
	void draw();
};

class Player2
{
public:
	float c;
	float d;

	void update();
	void draw();
};

class Laser
{
public:
	void update(PLayer one,Player2 aim);
	float startX; 
	float startY;

	float endX;
	float endY;



	void ldraw();    // draws the line
};