#include "ClearScene.h"
#include "TitleScene.h"

void ClearScene::Initialize() {}

void ClearScene::Update() {
    if (Novice::CheckHitKey(DIK_RETURN)) {
        nextScene_ = new TitleScene();
    }
}

void ClearScene::Draw() {
    Novice::ScreenPrintf(500, 300, "Clear! Press ENTER to return to Title");
}

IScene* ClearScene::GetNextScene() {
    return nextScene_;
}
