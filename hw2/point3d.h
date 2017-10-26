//point class for hw2
#ifndef POINT3D_H
#define POINT3D_H

class Point3d{
public:
	//constructor
	Point3d(double x, double y, double z);
	//methods
	void setX(double x);
	void setY(double y);
	void setZ(double z);
	void shift(int axis, double distance);
	//observers
	double getX() const;
	double getY() const;
	double getZ() const;
private:
	double x;
	double y;
	double z;
};
//non member function
bool operator == (const Point3d& p1, const Point3d& p2);

#endif