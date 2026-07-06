#include "Game.h"
#include <iostream>

bool Game::Init()
{
	return true;
}

void Game::ProcessInputs()
{
	std::cout << "Process Inputs\n";
}

void Game::Update()
{
	std::cout << "Update\n";

}

void Game::Draw()
{
	std::cout << "Draw\n";

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
		ProcessInputs();
		Update();
		Draw();
	}

}
