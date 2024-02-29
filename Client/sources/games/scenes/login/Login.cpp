/*
** EPITECH PROJECT, 2024
** RType
** File description:
** Login
*/

#include "Login.hpp"

rtype::Login::~Login()
{
}

void rtype::Login::draw()
{
    BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Login", 10, 10, 20, BLACK);
        DrawText(test.c_str(), 10, 30, 20, BLACK);

        rlPushMatrix();
            rlTranslatef(0, 25*50, 0);
            rlRotatef(90, 1, 0, 0);
            DrawGrid(100, 50);
        rlPopMatrix();

    EndDrawing();
}

void rtype::Login::update(float deltatime, float getTime)
{
    int num = std::stoi(test);

    if (IsKeyPressed(KEY_ENTER)) {
        test = std::to_string(num + 1);
    }
}
