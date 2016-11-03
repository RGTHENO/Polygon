#ifndef __POINT_H__
#define __POINT_H__
class Point{
	private:
		int x;
		int y;
	
	
	public:
		Point();
		Point(int, int);
		Point(Point &);

		void printPoint();
		void modifyPoint(int, int);

		// Metodos Accesores
		void setX(const int);
		void setY(const int);
		int getX() const;
		int getY()const;

};

#endif
