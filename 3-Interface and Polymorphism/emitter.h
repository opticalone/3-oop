#pragma once
#include "GameObject.h"
#include "particle.h"

class Emitter : public GameObject
{
	float spawnAccumulator;

public:
	Emitter();

	BaseParticele particles[100];

	int particleID;
	float spawnInt;
	virtual void update();
	virtual void draw();

};