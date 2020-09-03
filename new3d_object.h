#pragma once

#include "game_object.h"

class New3d_Object : public Game_Object
{
public:
	New3d_Object(const char* id);
	~New3d_Object();

	virtual void simulate_AI(const double seconds_to_simulate, const Assets* assets, const Scene* scene, const Configuration* config, const Input* input) override;
	virtual void render(const double seconds_to_simulate, const Assets* assets, const Scene* scene, const Configuration* config) override;
};