#include "point3d.h"

Point3d::Point3d(double x, double y, double z){
	this->x=x;
	this->y=y;
	this->z=z;
}

void Point3d::setX(double x){
	this->x=x;
}

void Point3d::setY(double y){
	this->y=y;
}

void Point3d::setZ(double z){
	this->z=z;
}

void Point3d::shift(int axis, double distance){
	if (axis==0){
		x=x+distance;
	} else if (axis==1){
		y=y+distance;
	} else if (axis==2){
		z=z+distance;
	}
}

double Point3d::getX() const{
	return x;
}

double Point3d::getY() const{
	return y;
}

double Point3d::getZ() const{
	return z;
}

bool operator == (const Point3d& p1, const Point3d& p2){
	if (p1.getX()==p2.getX() && p1.getY()==p2.getY() && p1.getZ()==p2.getZ()){
		return true;
	} else return false;
}