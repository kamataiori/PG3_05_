#include "TitleScene.h"
#include "GamePlayScene.h"

void TitleScene::Initialize() {}

void TitleScene::Update() {
    if (Novice::CheckHitKey(DIK_SPACE)) {
        nextScene_ = new GamePlayScene();
    }
}

void TitleScene::Draw() {
    Novice::ScreenPrintf(500, 300, "Press SPACE to Start");
}

IScene* TitleScene::GetNextScene() {
    return nextScene_;
}
