#pragma once
#include <Novice.h>
#include "Player.h"
#include "MoveLeftCommand.h"
#include "MoveRightCommand.h"
#include "InputHandler.h"
#include "Enemy.h"

class MainLoop;

class Result
{
public:

	/// <summary>
	/// 初期化
	/// </summary>
	void Initialize();

	/// <summary>
	/// 更新
	/// </summary>
	void Update();

	/// <summary>
	/// 描画
	/// </summary>
	void Draw();

private:

	Player player;
	MoveLeftCommand moveLeftCommand;
	MoveRightCommand moveRightCommand;
	InputHandler inputHandler;

	Enemy enemy;

};

