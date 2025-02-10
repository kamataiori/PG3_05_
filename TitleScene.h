#pragma once
#include <Novice.h>
#include "IScene.h"

class GamePlayScene; // 前方宣言

class TitleScene : public IScene {
public:
    void Initialize() override;
    void Update() override;
    void Draw() override;
    IScene* GetNextScene() override;

private:
    IScene* nextScene_ = nullptr;
};
