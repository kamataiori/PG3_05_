#pragma once
#include "ICommand.h"

class InputHandler {
public:
    ICommand* HandleInput(char key) {
        if (key == 'A') {
            return moveLeftCommand_;
        }
        else if (key == 'D') {
            return moveRightCommand_;
        }
        return nullptr;
    }

    void AssignKeys(ICommand* moveLeftCommand, ICommand* moveRightCommand) {
        moveLeftCommand_ = moveLeftCommand;
        moveRightCommand_ = moveRightCommand;
    }

private:
    ICommand* moveLeftCommand_ = nullptr;
    ICommand* moveRightCommand_ = nullptr;
};
