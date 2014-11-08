using namespace std;
#ifndef __Position_h__
#define __Position_h__

#include <ostream>
#include <iostream>

class Position
{

	private:
	    int _x;
	    int _y;

	public:
        Position();
	    Position(int, int);
	    int getX();
        void setX(int aX);
        int getY();
        void setY(int aY);

        friend ostream& operator << (ostream& os, const Position& p)
        {
           os << '[' << p._x << ',' << p._y << ']';
           return os;
        }
};

#endif
