//
// Created by Tyler Craig Wilcox on 3/6/17.
//

#include "Mesh.h"

Mesh::Mesh() {
    elementVertices = nullptr;
}

Mesh::Mesh(VertexData* data) {
    this->elementVertices = data;
}

Mesh::Mesh(int numberVerticies) {
    this->elementVertices = new VertexData[numberVerticies];
}

VertexData* Mesh::getVertexData() {
    return elementVertices;
}