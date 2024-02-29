/*
** EPITECH PROJECT, 2023
** RType
** File description:
** Game
*/

#include "Game.hpp"

Game::Game()
{
    this->_scene = _Scene::LOGIN;
}

Game::~Game()
{
}

void Game::run()
{
    const int screenWidth = 1200;
    const int screenHeight = 700;


    InitWindow(screenWidth, screenHeight, "Pokemon - Rouge");
    SetTargetFPS(240);

    // ------------------ INIT SCENES ------------------ //
    // Font myFont = LoadFontEx("./Media/font/Prototype.ttf", 96, 0, 250);

    rtype::Login loginScene(this->_scene, _soundManager);
    // Font Spiegel = LoadFontEx("./Media/Fonts_Package/Fonts_Package/Spiegel-TTF/Spiegel_TT_Bold.ttf", 96, 0, 250);


    // ------------------ BUILDER SCENES ------------------ //
    this->allScenes[_Scene::LOGIN] = std::make_unique<rtype::Login>(loginScene);


    // ------------------ CREATE ENTITIES ------------------ //

    rtype::ECS::Ecs3D::IEntity player("name");
    Image img = LoadImage("./Media/player.png");
    player.addComponent<rtype::ECS::Ecs3D::Texture2d>(img, "playerTexture");
    // game.addEntity(std::make_shared<IEntity>(player));



    // ------------------ MAIN LOOP ------------------ //
    while (!WindowShouldClose()) {
        float deltaTime = GetFrameTime();
        this->allScenes[this->_scene]->update(deltaTime, GetTime());
        this->allScenes[this->_scene]->draw();
    }
    CloseWindow();
}
