#pragma once
#include <Novice.h>

class Enemy {
public:
    Enemy() : x_(30), y_(300), speed_(3), direction_(1), isActive_(true) {}

    void Update() {
        if (!isActive_) return; // 非アクティブなら更新しない

        x_ += speed_ * direction_;
        if (x_ >= 1200) {
            x_ = 1200;
            direction_ = -1;
        }
        else if (x_ <= 30) {
            x_ = 30;
            direction_ = 1;
        }
    }

    void Draw() {
        if (!isActive_) return; // 非アクティブなら描画しない
        Novice::DrawBox(x_, y_, 50, 50, 0.0f, RED, kFillModeSolid);
    }

    bool IsActive() const { return isActive_; }
    void Deactivate() { isActive_ = false; }

    int GetX() const { return x_; }
    int GetY() const { return y_; }

private:
    int x_, y_;
    int speed_;
    int direction_;
    bool isActive_;
};
