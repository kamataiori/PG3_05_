#pragma once
#include <Novice.h>

class Player {
public:
    Player() : x_(400), y_(300) {}

    void MoveRight() {
        x_ += 5; // 右に移動
    }

    void MoveLeft() {
        x_ -= 5; // 左に移動
    }

    void Draw() {
        Novice::DrawBox(x_, y_, 50, 50, 0.0f, WHITE, kFillModeSolid);
    }

private:
    int x_, y_;
};
