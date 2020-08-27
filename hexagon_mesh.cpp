#pragma once
#include "hexagon_mesh.h"

Hexagon_Mesh::Hexagon_Mesh()
	: Mesh("Mesh.Hexagon")
{
	_verticies.insert(_verticies.end(), { -0.5f, -0.5f, 0.f }); // v1
	_verticies.insert(_verticies.end(), { 0.5f, -0.5f, 0.f }); // v2
	_verticies.insert(_verticies.end(), { 0.f, 0.5f, 0.f }); // v3

	_verticies.insert(_verticies.end(), { 0.f, 0.5f, 0.f }); // v4=v3
	_verticies.insert(_verticies.end(), { -0.5f, 0.14425f, 0.f }); // v5
	_verticies.insert(_verticies.end(), { -0.5f, -0.5f, 0.f }); // v6=v1

	_verticies.insert(_verticies.end(), { 0.5f, -0.5f, 0.f }); // v7=v2
	_verticies.insert(_verticies.end(), { 0.5f, 0.14425f, 0.f }); // v8
	_verticies.insert(_verticies.end(), { 0.f, 0.5f, 0.f }); // v9=v3

	_verticies.insert(_verticies.end(), { 0.f, -0.7885f, 0.f }); // v12
	_verticies.insert(_verticies.end(), { 0.5f, -0.5f, 0.f }); // v11=v2
	_verticies.insert(_verticies.end(), { -0.5f, -0.5f, 0.f }); // v10=v1

	_texture_coordinates.insert(_texture_coordinates.end(), { 0.0f, 0.0f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 1.0f, 0.0f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 1.0f, 1.0f });

	_texture_coordinates.insert(_texture_coordinates.end(), { 1.0f, 1.0f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.0f, 1.0f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.0f, 0.0f });

	_texture_coordinates.insert(_texture_coordinates.end(), { 0.0f, 0.0f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.0f, 1.0f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 1.0f, 1.0f });

	_texture_coordinates.insert(_texture_coordinates.end(), { 1.0f, 1.0f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 1.0f, 0.0f });
	_texture_coordinates.insert(_texture_coordinates.end(), { 0.0f, 0.0f });
}
Hexagon_Mesh::~Hexagon_Mesh()
{
}