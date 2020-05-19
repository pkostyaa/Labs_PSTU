#pragma once
#include "Object.h"

class Pair : public Object {
public:

    virtual void setIntHalf(int) = 0;
    virtual int getIntHalf() = 0;
    virtual void setFloatHalf(int) = 0;
    virtual int getFloatHalf() = 0;
    virtual void Show() = 0;
};