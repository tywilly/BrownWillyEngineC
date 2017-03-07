//
// Created by Tyler Craig Wilcox on 3/6/17.
//

#ifndef BROWNWILLYENGINE_MESH_H
#define BROWNWILLYENGINE_MESH_H

typedef struct VertexData{
    float x;
    float y;
    float z;
} VertexData;

class Mesh {
public:
    Mesh();
    Mesh(VertexData* data);
    Mesh(int numberVerticies);
    VertexData* getVertexData();
protected:
private:
    VertexData* elementVertices;
};


#endif //BROWNWILLYENGINE_MESH_H
