#include <exception>
using namespace std;

#ifndef __Observer_h__
#define __Observer_h__

class Observer
{
public:
    virtual void update() = 0;
};

#endif
