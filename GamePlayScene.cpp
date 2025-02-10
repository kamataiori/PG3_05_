#include "GamePlayScene.h"
#include "ClearScene.h"

void GamePlayScene::Initialize() {
    player_ = new Player();
    enemy_ = new Enemy();
}

void GamePlayScene::Update() {
    if (Novice::CheckHitKey(DIK_A)) {
        player_->MoveLeft();
    }
    if (Novice::CheckHitKey(DIK_D)) {
        player_->MoveRight();
    }
    if (Novice::CheckHitKey(DIK_SPACE)) {
        player_->Shoot();
    }

    player_->Update();
    enemy_->Update();

    for (auto& bullet : player_->GetBullets()) {
        if (enemy_->IsActive()) {
            int bx = bullet.GetX();
            int by = bullet.GetY();
            int ex = enemy_->GetX();
            int ey = enemy_->GetY();

            if (bx > ex && bx < ex + 50 && by > ey && by < ey + 50) {
                enemy_->Deactivate();
                bullet.Deactivate();
                nextScene_ = new ClearScene();
            }
        }
    }
}

void GamePlayScene::Draw() {
    player_->Draw();
    enemy_->Draw();
}

IScene* GamePlayScene::GetNextScene() {
    return nextScene_;
}
