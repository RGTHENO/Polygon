#include "Triangle.h"
#include <cmath>
 
Point constructorPoints[4];

Point *updateConstructorPoints(const Point &p1, const Point &p2, const Point &p3, const Point &p4 = Point(0,0)){

	constructorPoints[0] = p1;
	constructorPoints[1] = p2;
	constructorPoints[2] = p3;
	constructorPoints[3] = p4;
	
	return constructorPoints;

}  

Triangle::Triangle(const Point &p0, const Point &p1, const Point &p2)
		 : Polygon( updateConstructorPoints(p0,p1,p2),3){}

double Triangle::area() const{
	
		int p0p1_X, p0p1_Y, p1p2_X,p1p2_Y, p2p0_X, p2p0_Y;
		double a,b,c,s;
						
		p0p1_X= points.get(0)->getX() - points.get(1)->getX(),
		p0p1_Y = points.get(0)->getY() - points.get(1)->getY(),
			
		p1p2_X = points.get(1)->getX() - points.get(2)->getX(),
		p1p2_Y = points.get(1)->getY() - points.get(2)->getY(),
			
		p2p0_X = points.get(2)->getX() - points.get(0)->getX(),
		p2p0_Y = points.get(2)->getY() - points.get(0)->getY();
		
		a = sqrt(p0p1_X*p0p1_X + p0p1_Y*p0p1_Y);
		b = sqrt(p1p2_X*p1p2_X + p1p2_Y*p1p2_Y);
		c = sqrt(p2p0_X*p2p0_X + p2p0_Y*p2p0_Y);	
		
		s=(a+b+c)/2; //Estamos calculando el semiperimitro
		
		return sqrt(s*(s-a)*(s-b)*(s-c));

}

