#include <cmath>
#include "Rectangle.h"
 
Point constructorPoints[4];

Point *updateConstructorPoints(const Point &p1, const Point &p2, const Point &p3, const Point &p4 = Point(0,0)){

	constructorPoints[0] = p1;
	constructorPoints[1] = p2;
	constructorPoints[2] = p3;
	constructorPoints[3] = p4;
	
	return constructorPoints;

} 
Rectangle::Rectangle(const Point &lowerLeft, const Point &upperRight): 
						Polygon(updateConstructorPoints(lowerLeft, 
														Point(lowerLeft.getX(),upperRight.getY()),
														upperRight, 
														Point(upperRight.getX(),lowerLeft.getY()) 
														)				
   					            ,4){}
					       
Rectangle::Rectangle(const int lowerLeftX,const int lowerLeftY,
					 const int upperRightX, const int upperRightY):
					 Polygon( updateConstructorPoints( Point (lowerLeftX,lowerLeftY),
					 Point(lowerLeftX,upperRightY), Point(upperRightX,upperRightY),
					 Point(upperRightX,lowerLeftY)) , 4) {}
					

double Rectangle::area() const{
		
		int length = points.get(1)->getY() - points.get(0)->getY();
		int width = points.get(2) ->getX() - points.get(1)->getX();
		
		return std::abs(double(length*width));
	
}											


