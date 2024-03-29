/*
** TALWEB PROJECT, 2023
** ecs_rType
** File description:
** ecs
*/

#pragma once
#include "common.hpp"
#include "entity.hpp"
#include "IScene.hpp"

namespace rtype::ECS::Ecs3D {
    class AScene {
    public:
        virtual ~AScene() = default;

        virtual void draw() = 0;

        virtual void update(float deltatime, float getTime) = 0;

        void addEntity(std::shared_ptr<IEntity> entity) {
            entities.insert(std::pair<std::string, std::shared_ptr<IEntity>>(entity->getName(), entity));
        }

        void addEntity(std::vector<std::shared_ptr<IEntity>> entities) {
            for (auto &entity : entities) {
                addEntity(entity);
            }
        }

        void removeEntity(std::shared_ptr<IEntity> entity) {
            entities.erase(entity->getName());
        }


        std::map<std::string, std::shared_ptr<IEntity>> getEntities() {
            return entities;
        }


        std::shared_ptr<IEntity> getEntity(std::string nameTag) {
            if (entities.find(nameTag) != entities.end()) {
                return entities[nameTag];
            } else {
                return nullptr;
            }
        }

        void editEntity(std::string nameTag, std::shared_ptr<IEntity> value) {
            if (entities.find(nameTag) != entities.end()) {
                entities[nameTag] = value;
            }
        }

    protected:
        std::map<std::string, std::shared_ptr<IEntity>> entities; /**< The map of entities in the scene. */
    };
}