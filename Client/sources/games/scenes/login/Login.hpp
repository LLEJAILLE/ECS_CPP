/*
** EPITECH PROJECT, 2024
** RType
** File description:
** login
*/

#ifndef LOGIN_HPP_
    #define LOGIN_HPP_
    #include "../../../../includes/MainInclusdes.hpp"
    #include <filesystem>

namespace rtype {

    class Login : public ECS::Ecs3D::AScene {
        public:
            Login(_Scene &scene, SoundManager &soundManager) : _scene(scene), _soundManager(soundManager) {
                this->_scene = _Scene::LOGIN;
            }
            ~Login();

            void draw() override;
            void update(float deltatime, float getTime) override;

            SoundManager &_soundManager;

            _Scene &_scene;

            std::string test = "0";
    };
}

#endif /* !LOGIN_HPP_ */
