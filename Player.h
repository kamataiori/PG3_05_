#pragma once
#include <Novice.h>
#include <vector>
#include "Bullet.h"
#include "Enemy.h"

class Player {
public:
    Player() : x_(400), y_(600) {}

    void MoveRight() { x_ += 5; }
    void MoveLeft() { x_ -= 5; }
    void Shoot() { bullets_.emplace_back(x_ + 20, y_); }

    void Update() {
        for (auto& bullet : bullets_) {
            bullet.Update();
        }
        bullets_.erase(std::remove_if(bullets_.begin(), bullets_.end(),
            [](const Bullet& b) { return !b.IsActive(); }),
            bullets_.end());
    }

    void Draw() {
        Novice::DrawBox(x_, y_, 50, 50, 0.0f, WHITE, kFillModeSolid);
        for (auto& bullet : bullets_) {
            bullet.Draw();
        }
    }

    std::vector<Bullet>& GetBullets() { return bullets_; }

private:
    int x_, y_;
    std::vector<Bullet> bullets_;
};
