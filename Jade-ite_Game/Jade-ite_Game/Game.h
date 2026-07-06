#pragma once

class Game
{
private:
	bool m_bIsRunning;

	bool Init();

	void ProcessInputs();
	void Update();
	void Draw();

public:
	Game();
	~Game();

	void Run();

};