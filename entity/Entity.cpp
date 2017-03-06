//
// Created by Tyler Craig Wilcox on 3/6/17.
//

#include "Entity.h"

Entity::Entity(float x, float y, float z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

float Entity::getX() {
    return this->x;
}

void Entity::setX(float x) {
    this->x = x;
}

float Entity::getY() {
    return this->y;
}

void Entity::setY(float y) {
    this->y = y;
}

float Entity::getZ() {
    return this->z;
}

void Entity::setZ(float z) {
    this->z = z;
}