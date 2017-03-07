//
// Created by Tyler Craig Wilcox on 3/6/17.
//

#include "Object.h"

Object::Object(float x, float y, float z) : Entity(x,y,z) {
}

Mesh* Object::getMesh() {
    return objMesh;
}

void Object::setMesh(Mesh *mesh) {
    this->objMesh = mesh;
}