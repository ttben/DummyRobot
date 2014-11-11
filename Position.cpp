
#include "Position.h"

Position::Position(){}

Position::Position(int x, int y) {
    _x = x;
    _y = y;
}

int Position::getX() {
	return this->_x;
}

void Position::setX(int aX) {
	this->_x = aX;
}

int Position::getY() {
	return this->_y;
}

void Position::setY(int aY) {
	this->_y = aY;
}

