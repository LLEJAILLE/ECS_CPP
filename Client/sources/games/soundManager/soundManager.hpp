/*
** EPITECH PROJECT, 2024
** RType
** File description:
** soundManager
*/

#pragma once

#include "../../../../Includes/Includes.hpp"

namespace rtype
{
    /**
     * @brief The SoundManager class handles the management of sound effects in the game.
     * 
     * It provides functions to update the listener's position and direction, as well as
     * adjust the volume of different sound types. The SoundManager also contains various
     * sound buffers and sound objects for different sound effects.
     */
    class SoundManager
    {
    public:
        SoundManager();
        ~SoundManager();

        /**
         * @brief Updates the position and direction of the sound listener.
         * 
         * @param position The position of the listener in 3D space.
         * @param direction The direction the listener is facing in 3D space.
         */
        void updateListener(Vector3 position, Vector3 direction);

        /**
         * @brief Updates the volume of a specific sound type.
         * 
         * @param type The type of sound to update the volume for.
         * @param volume The new volume value for the sound type.
         */
        void updateVolume(std::string type, float volume);

        sf::Listener listener;

        sf::SoundBuffer bufferFootStep;
        sf::Sound footStepSound;
        sf::SoundBuffer bufferMyFootStep;
        sf::Sound myFootStepSound;

        sf::SoundBuffer bufferShoot;
        sf::Sound shootSound;
        sf::SoundBuffer bufferMyShoot;
        sf::Sound myShootSound;

        sf::SoundBuffer bufferHit;
        sf::Sound hitSound;

        sf::SoundBuffer bufferHeadShot;
        sf::Sound headShotSound;

        sf::SoundBuffer bufferMenu;
        sf::Sound menuSound;

    protected:
    private:
    };
}