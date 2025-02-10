#pragma once
#include <Novice.h>
#include "IScene.h"
#include "Player.h"
#include "Enemy.h"

class ClearScene; // 前方宣言

class GamePlayScene : public IScene {
public:
    void Initialize() override;
    void Update() override;
    void Draw() override;
    IScene* GetNextScene() override;

private:
    Player* player_;
    Enemy* enemy_;
    IScene* nextScene_ = nullptr;
};
