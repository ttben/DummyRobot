
#ifndef __Position_h__
#define __Position_h__

// #include "Robot.h"

class Robot;
class Position;

class Position
{
	private: int _x;
	private: int _y;
	public: Robot* _position;

	public: int getX();

	public: void setX(int aX);

	public: int getY();

	public: void setY(int aY);
};

#endif
