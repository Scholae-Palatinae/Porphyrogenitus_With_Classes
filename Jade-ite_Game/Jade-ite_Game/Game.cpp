#include "Game.h"
#include <iostream>
#include "Logger.h"

bool Game::Init()
{
	return true;
}

void Game::ProcessInputs()
{
	TRPG_LOG("Process Inputs");
}

void Game::Update()
{
	TRPG_ERROR("Update");

}

void Game::Draw()
{
	TRPG_LOG("Draw");

}

Game::Game()
	:m_bIsRunning{true} //this way you initialize the function
{

}

Game::~Game()
{

}

void Game::Run()
{
	if (!Init())
		m_bIsRunning = false;

	while(m_bIsRunning)
	{
		std::cout << "Byzantinlidhs\n";
		ProcessInputs();
		Update();
		Draw();
	}

}
