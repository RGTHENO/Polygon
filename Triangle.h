#ifndef __TRIANGLE_H__
#define __TRIANGLE_H__

#include "Polygon.h"

class Triangle:public Polygon{

		public:
			Triangle(const Point &, const Point & , const Point &);
			virtual double area() const;
	
};

#endif
