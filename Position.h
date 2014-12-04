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
	    int getX()const;
        void setX(int aX);
        int getY()const;
        void setY(int aY);

        friend ostream& operator << (ostream& os, const Position& p){
           os << '[' << p._x << ';' << p._y << ']';
           return os;
        }

        Position& operator=(const Position& p){
            _x = p.getX();
            _y = p.getY();
            return *this;
        }
};

#endif
