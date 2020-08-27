#include "six_object.h"
#include "colored_3D_shader_program.h"
#include "assets.h"

#define GLEW_STATIC
#include <glew.h>

#include <vector>
#include <math.h>

Six_Object::Six_Object(const char* id)
	: Game_Object(id)
{
	_total_time = 0;

	_translation.x += 8.f;

	_scale.x = 0.6f;
	_scale.y = 0.6f;
	_scale.z = 0.6f;
}
Six_Object::~Six_Object()
{
}


void Six_Object::simulate_AI(const double, const Assets*, const Scene*, const Configuration*, const Input*)
{

}
void Six_Object::render(const double s, const Assets* assets, const Scene* scene, const Configuration* config)
{
	static double time = 0;
	time -= s;

	std::vector<GLfloat> colors =
	{
		0.0f, 1.0f, 0.0f, 1.0f,
		0.0f, 1.0f, 0.0f, 1.0f,
		0.0f, 1.0f, 0.0f, 1.0f,

		0.0f, 1.0f, 0.0f, 1.0f,
		0.0f, 0.0f, 1.0f, 1.0f,
		0.0f, 1.0f, 0.0f, 1.0f,

		0.0f, 1.0f, 0.0f, 1.0f,
		0.0f, 0.0f, 1.0f, 1.0f,
		0.0f, 1.0f, 0.0f, 1.0f,

		0.0f, 0.0f, 1.0f, 1.0f,
		0.0f, 1.0f, 0.0f, 1.0f,
		0.0f, 1.0f, 0.0f, 1.0f,
	};

	const Colored_3D_Shader_Program* program = (Colored_3D_Shader_Program*)assets->get_asset("Shader_Program.3D.Colored");
	const Mesh* mesh = (Mesh*)assets->get_asset("Mesh.Hexagon");

	glm::mat4 trans = transformation(scene, config);

	program->render(config, mesh, &colors, &trans);
}