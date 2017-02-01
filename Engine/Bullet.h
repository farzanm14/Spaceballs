#pragma once
#include "Graphics.h"

class Bullet
{
public:
	void Spawn(float X, float Y, float dt);
	void Update(float dt);
	bool HasSpawned() const;
	void Draw(Graphics & gfx);
	float GetX();
	float GetY();
	int GetBulletSize();
	void SetHasSpawned(bool hit);
	
private:
	bool hasSpawned = false;
	int bulletSize = 10;
	float x;
	float y;
	float vy = 15.0f * 60.0f;
};