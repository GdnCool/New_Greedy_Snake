#ifndef HINDER_H
#define HINDER_H
#include"position.h"
class Hinder{
public:
    Vector<Position> getPositions();
    void setpPositions(Vector<position>);

private:
    Vector<Position> positions;

};

#endif // HINDER_H
