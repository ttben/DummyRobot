#include <exception>
using namespace std;

#ifndef __Observer_h__
#define __Observer_h__

// #include "Robot.h"

class Robot;
class Observer;

class Observer
{
public:
    virtual void update();
};

#endif
