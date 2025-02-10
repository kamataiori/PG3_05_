#pragma once
#include <Novice.h>

class Bullet {
public:
    Bullet(int x, int y) : x_(x), y_(y), speed_(10), active_(true) {}

    void Update() {
        if (active_) {
            y_ -= speed_;
            if (y_ < 0) {
                active_ = false;
            }
        }
    }

    void Draw() {
        if (active_) {
            Novice::DrawBox(x_, y_, 10, 10, 0.0f, YELLOW, kFillModeSolid);
        }
    }

    bool IsActive() const { return active_; }
    void Deactivate() { active_ = false; }

    int GetX() const { return x_; }
    int GetY() const { return y_; }

private:
    int x_, y_;
    int speed_;
    bool active_;
};
