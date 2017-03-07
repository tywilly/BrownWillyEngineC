//
// Created by Tyler on 3/7/2017.
//

#include "Cube.h"

Cube::Cube(float x, float y, float z) : Object(x,y,z) {

    VertexData* vtxDta = new VertexData[36];

    //vtxDta[0].x = ;

    setMesh(new Mesh(vtxDta));

}