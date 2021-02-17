#ifndef MOVABLE_H
#define MOVABLE_H

#include "vec2.h"

class movable {
    public :
        virtual void translate(vec2 v) = 0;
};

#endif