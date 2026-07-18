#include "Game.h"
#include <iostream>
#include "Logger.h"

bool Game::Init()
{
	try
	{
		m_pConsole = std::make_unique <Console>();

	}
	catch (std::exception& e)
	{
		std::string error = e.what();
		TRPG_ERROR(error);
		return false;
	}
	return true;
}

void Game::ProcessInputs()
{

}

void Game::Update()
{

}

void Game::Draw()
{
	m_pConsole->Write(10, 10, L"Hello World!", RED);
	m_pConsole->Draw();
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
