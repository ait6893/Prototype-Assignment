#pragma once

#include "new3d_mesh.h"

New3d_Mesh::New3d_Mesh()
	: Mesh("Mesh.New3d")
{
	auto v1 = { -0.5f, -0.5f, 0.5f };
	auto v2 = { 0.5f, -0.5f, 0.5f };
	auto v3 = { 0.f, 0.5f, 0.f };
	auto v4 = { 0.f, -0.5f, -0.5f };

	auto width = 1.0f / 4.0f;
	for (int face_index = 0; face_index < 4; ++face_index)
	{
		auto top = { (face_index * width) + width/2, 0.0f };
		auto right = { (face_index * width) + width, 1.0f };
		auto left = { (face_index * width) + width, 1.0f };

		_texture_coordinates.insert(_texture_coordinates.end(), top);
		_texture_coordinates.insert(_texture_coordinates.end(), right);
		_texture_coordinates.insert(_texture_coordinates.end(), left);
	}

	// Front Face
	_verticies.insert(_verticies.end(), v1);
	_verticies.insert(_verticies.end(), v3);
	_verticies.insert(_verticies.end(), v2);

	// Right Face
	_verticies.insert(_verticies.end(), v1);
	_verticies.insert(_verticies.end(), v4);
	_verticies.insert(_verticies.end(), v3);

	// Left Face
	_verticies.insert(_verticies.end(), v1);
	_verticies.insert(_verticies.end(), v2);
	_verticies.insert(_verticies.end(), v4);

	// Bottom Face
	_verticies.insert(_verticies.end(), v2);
	_verticies.insert(_verticies.end(), v3);
	_verticies.insert(_verticies.end(), v4);
}
New3d_Mesh::~New3d_Mesh()
{
}