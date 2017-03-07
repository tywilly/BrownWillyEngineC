//
// Created by Tyler on 3/7/2017.
//

#include "Pyramid.h"


Pyramid::Pyramid(float x, float y, float z) : Object(x,y,z) {

    VertexData* vd = new VertexData[18];

    vd[0].x = 1.0;
    vd[0].y = -1.0;
    vd[0].z = -1.0;

    vd[1].x = -1.0;
    vd[1].y = -1.0;
    vd[1].z = -1.0;

    vd[2].x = -1.0;
    vd[2].y = -1.0;
    vd[2].z = 1.0;

    vd[3].x = 1.0;
    vd[3].y = -1.0;
    vd[3].z = -1.0;

    vd[4].x = -1.0;
    vd[4].y = -1.0;
    vd[4].z = 1.0;

    vd[5].x = 1.0;
    vd[5].y = -1.0;
    vd[5].z = 1.0;

    vd[6].x = 0;
    vd[6].y = 1; // Front Top
    vd[6].z = 0;

    vd[7].x = -1;
    vd[7].y = -1; // Front Bot Left
    vd[7].z = 1;

    vd[8].x = 1;
    vd[8].y = -1; // Front Bot Right
    vd[8].z = 1;

    vd[9].x = 0;
    vd[9].y = 1; // Right Top
    vd[9].z = 0;

    vd[10].x = 1;
    vd[10].y = -1; // Right Bot Left
    vd[10].z = 1;

    vd[11].x = 1;
    vd[11].y = -1; // Right Bot Right
    vd[11].z = 1;

    vd[12].x = 0;
    vd[12].y = 1; // Back Top
    vd[12].z = 0;

    vd[13].x = 1;
    vd[13].y = -1; // Back Left
    vd[13].z = 1;

    vd[14].x = -1;
    vd[14].y = -1; // Back Right
    vd[14].z = 1;

    vd[15].x = 0;
    vd[15].y = 1; // Left Top
    vd[15].z = 0;

    vd[16].x = -1;
    vd[16].y = -1; // Left Left
    vd[16].z = -1;

    vd[17].x = -1;
    vd[17].y = -1; // Left Right
    vd[17].z = 1;

    setMesh(new Mesh(vd));

}