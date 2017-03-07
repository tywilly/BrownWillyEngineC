//
// Created by Tyler Craig Wilcox on 3/6/17.
//

#include "Object.h"

Object::Object(float x, float y, float z) : Entity(Object::getX(),Object::getY(),Object::getZ()) {
}

Mesh* Object::getMesh() {
    return objMesh;
}

void Object::setMesh(Mesh *mesh) {
    this->objMesh = mesh;
}