#include "emitter.h"
#include "sfwdraw.h"

Emitter::Emitter()
{
	for (int i = 0; i < 100; i++)
		Particles[i].enabled = true;
	spawnAccumulator = 0.0f;
}

void Emitter::update()
{
	spawnAccumulator += sfw::getDeltaTime();
	if (spawnAccumulator > spawnInt)
	{
		for (int i = 0; i < 100; i++)
		{
			if (particles[i].enabled==false)
			{
				BaseParticle& baby = particles[i];
				baby.x = 400;
				baby.y = 300;

				baby.speedX = 20;
				baby.speedY = 30;
				baby.enabled = true;

				spawnAccumulator = 0.0f;
				break;

			}
		}
	}
	for (int i = 0; i < 100; ++i)
	{
		if (particles[i].enabled = true)
		{
			particles.i = update;
		}
	}
}