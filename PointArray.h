#ifndef __POINTARRAY_H__
#define __POINTARRAY_H__

#include "Point.h"

class PointArray{
	
	private:
		int size;
		Point* arreglo;
		void resize(const int new_size);

	public:
		PointArray(); 
		~PointArray();
		PointArray(const Point points[], const int size);
		PointArray(const PointArray& pv);
		void push_back(const Point &p);
		void insert(const int pos, const Point &p);		
		void clear();
		void printPointArray();
		void remove(const int position);
		const int getSize()const;
		Point* get(const int pos);
		const Point* get(const int pos)const;
	


};

#endif
