//
// Created by Tyler Craig Wilcox on 3/6/17.
//

#ifndef BROWNWILLYENGINE_ENTITY_H
#define BROWNWILLYENGINE_ENTITY_H


class Entity {
public:
    Entity(float x, float y, float z);

    void setX(float x);
    void setY(float y);
    void setZ(float z);

    float getX();
    float getY();
    float getZ();

protected:
private:
    float x,y,z;
};


#endif //BROWNWILLYENGINE_ENTITY_H
