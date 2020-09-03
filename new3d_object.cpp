#include "new3d_object.h"
#include "colored_3D_shader_program.h"
#include "textured_3D_shader_program.h"
#include "assets.h"
#include "mesh.h"
#include "input.h"

#include <glm/mat4x4.hpp>
#include <glm/vec4.hpp>
#include <glm/gtx/transform.hpp>

#define GLEW_STATIC
#include <glew.h>

#include <vector>
#include <math.h>

New3d_Object::New3d_Object(const char* id)
	: Game_Object(id)
{
	_translation.x += 20.f;

	_scale.x = 0.6f;
	_scale.y = 0.6f;
	_scale.z = 0.6f;
}
New3d_Object::~New3d_Object()
{
}

void New3d_Object::simulate_AI(const double, const Assets*, const Scene*, const Configuration*, const Input*)
{
}
void New3d_Object::render(const double seconds_to_simulate, const Assets* assets, const Scene* scene, const Configuration* config)
{
	static double total_time = 0;
	total_time += seconds_to_simulate;
	static double time = 0;
	time -= seconds_to_simulate;

	_rotation.x = (float)time;
	//_rotation.z = (float)time / 2;

	const Mesh* mesh = (Mesh*)assets->get_asset("Mesh.New3d");
	glm::mat4 trans = transformation(scene, config);

	const Textured_3D_Shader_Program* program = (Textured_3D_Shader_Program*)assets->get_asset("Shader_Program.3D.Textured");
	const Texture* texture = (Texture*)assets->get_asset("Texture.Crate_With_Sides_Marked");
	program->render(config, mesh, texture, &trans);
}