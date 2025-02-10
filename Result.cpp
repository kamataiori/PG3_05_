#include "Result.h"

void Result::Initialize(){
	inputHandler.AssignKeys(&moveLeftCommand, &moveRightCommand);
}

void Result::Update()
{
    if (Novice::CheckHitKey(DIK_A)) {
        moveLeftCommand.Exec(player);
    }
    if (Novice::CheckHitKey(DIK_D)) {
        moveRightCommand.Exec(player);
    }
    if (Novice::CheckHitKey(DIK_SPACE)) {
        player.Shoot();
    }

    player.Update();
    enemy.Update();

    // 当たり判定（弾と敵）
    for (auto& bullet : player.GetBullets()) {
        if (enemy.IsActive()) {
            int bx = bullet.GetX();
            int by = bullet.GetY();
            int ex = enemy.GetX();
            int ey = enemy.GetY();

            // シンプルなAABB衝突判定
            if (bx > ex && bx < ex + 50 && by > ey && by < ey + 50) {
                enemy.Deactivate();  // 敵を非表示にする
                bullet.Deactivate(); // 弾も消す
            }
        }
    }
}

void Result::Draw()
{
    player.Draw();
    enemy.Draw();
}
