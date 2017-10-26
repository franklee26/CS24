#include <iostream>
#include "point3d.h"

int main(){

	Point3d p1(9,5,7),p2(9,5,7); 

	p1.shift(2,3);

	bool x=(p1==p2);

	std::cout<<x<<std::endl;

	p1.setZ(7);

	bool k=(p1==p2);

	std::cout<<k<<std::endl;

	return 0;
}