#include <iostream>
#include "Triangle.h"
//#include "Rectangle.h"

void printAttributes(Polygon *p){
	const PointArray *parr = p->getPoints(); 

	std::cout<<"El area del Poligono es:  "<<p->area()<<"\n";
	std::cout<<"Sus puntos son: \n";

	for(int i=0;i<parr->getSize();i++){
		std::cout<<"Punto "<<i+1<<": ("<<parr->get(i)->getX()<<","<<parr->get(i)->getY()<<")\n";	
	}

}

int main(){
	
	//int lowerLeftX,lowerLeftY, upperRightX, upperRightY;
	//std::cin>>lowerLeftX;
	//std::cin>>lowerLeftY;
	//std::cin>>upperRightX;
	//std::cin>>upperRightY;
	
	//Point lowerLeft(lowerLeftX,lowerLeftY),upperRight(upperRightX,upperRightY);
	//Rectangle rect(lowerLeft,upperRight);
	//printAttributes(&rect);
	
	int p1X,p1Y,p2X,p2Y,p3X,p3Y;
	std::cin>>p1X;
	std::cin>>p1Y;
	std::cin>>p2X;
	std::cin>>p2Y;
	std::cin>>p3X;
	std::cin>>p3Y;
	
	Point p1(p1X,p1Y),p2(p2X,p2Y),p3(p3X,p3Y);
	Triangle trg(p1,p2,p3);
	printAttributes(&trg);
	
	
	
	return 0;
}
