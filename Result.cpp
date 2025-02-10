#include "Result.h"

void Result::Initialize()
{
	inputHandler.AssignKeys(&moveLeftCommand, &moveRightCommand);
}

void Result::Update()
{
    // DIK_A を押している場合、左に移動
    if (Novice::CheckHitKey(DIK_A)) 
    {
        moveLeftCommand.Exec(player);
    }
    // DIK_D を押している場合、右に移動
    if (Novice::CheckHitKey(DIK_D)) 
    {
        moveRightCommand.Exec(player);
    }
}

void Result::Draw()
{
    player.Draw();
}
