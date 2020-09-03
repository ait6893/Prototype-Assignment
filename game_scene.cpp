#include "game_scene.h"
#include "pointy_head.h"
#include "blocky_boy.h"
#include "six_Object.h"
#include "airplane.h"
#include "normal_crate.h"
#include "crazy_crate.h"
#include "new3d_object.h"
#include "input.h"

Game_Scene::Game_Scene()
	: Scene("Game")
{
	Blocky_Boy* blocky_boy = new Blocky_Boy("Game_Object.Blocky_Boy");
	_game_objects[blocky_boy->id()] = blocky_boy;

	Pointy_Head* pointy_head = new Pointy_Head("Game_Object.Pointy_Head");
	_game_objects[pointy_head->id()] = pointy_head;

	Six_Object* six_object = new Six_Object("Game_Object.SixObject");
	_game_objects[six_object->id()] = six_object;

	Normal_Crate* normal_crate = new Normal_Crate("Game_Object.Crate2");
	_game_objects[normal_crate->id()] = normal_crate;
	
	Crazy_Crate* crazy_crate = new Crazy_Crate("Game_Object.Crate");
	_game_objects[crazy_crate->id()] = crazy_crate;

	New3d_Object* new3d_object = new New3d_Object("Game_Object.New3d");
	_game_objects[new3d_object->id()] = new3d_object;
}

Game_Scene::~Game_Scene()
{

}

void Game_Scene::update(const double seconds_to_simulate, Input* input)
{
	if(input->is_button_state(Input::Button::FORWARD, Input::Button_State::DOWN))
	{
		_camera_position += _camera_forward * (float)seconds_to_simulate;
	}
	if(input->is_button_state(Input::Button::LEFT, Input::Button_State::DOWN))
	{
		_camera_position -= glm::cross(_camera_forward, _camera_up) * (float)seconds_to_simulate;
	}
	if(input->is_button_state(Input::Button::BACKWARD, Input::Button_State::DOWN))
	{
		_camera_position -= _camera_forward * (float)seconds_to_simulate;
	}
	if(input->is_button_state(Input::Button::RIGHT, Input::Button_State::DOWN))
	{
		_camera_position += glm::cross(_camera_forward, _camera_up) * (float)seconds_to_simulate;
	}
	if (input->is_button_state(Input::Button::ShowOne, Input::Button_State::DOWN))
	{
		_camera_position.x = 0.f;
	}
	if (input->is_button_state(Input::Button::ShowTwo, Input::Button_State::DOWN))
	{
		_camera_position.x = 4.f;
	}
	if (input->is_button_state(Input::Button::ShowThree, Input::Button_State::DOWN))
	{
		_camera_position.x = 8.f;
	}
	if (input->is_button_state(Input::Button::ShowFour, Input::Button_State::DOWN))
	{
		_camera_position.x = 12.f;
	}
	if (input->is_button_state(Input::Button::ShowFive, Input::Button_State::DOWN))
	{
		_camera_position.x = 16.f;
	}
	if (input->is_button_state(Input::Button::ShowSix, Input::Button_State::DOWN))
	{
		_camera_position.x = 20.f;
	}
}