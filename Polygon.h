#ifndef __POLYGON_H__
#define __POLYGON_H__

#include "PointArray.h"

class Polygon{
	
	
		protected:
			int nPolygons;
			PointArray points;
		
		public:
		
			Polygon(const PointArray &pa);
			Polygon(const Point points[], const int numPoints);
			virtual double area() const=0;
			
			int getNumPolygons(){return nPolygons;};
			int getNumSides() const{return points.getSize();};
			const PointArray *getPoints() const{return &points;};
			~Polygon(){--nPolygons;};
	
};
#endif
