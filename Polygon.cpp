#include "Polygon.h" 

 
Polygon::Polygon(const PointArray &pa) : points(pa){
		
		nPolygons++;	
}

Polygon::Polygon(const Point pointArray[], const int numPoints):points(pointArray,numPoints){
	nPolygons++;
}


//virtual double Polygon::area()const{ 
	/** Esta es una funcion virtual pura, para que luego las subclases lo definan para ser
	 * instanciada. 
	 * Este tipo de funciones hace que nuestra clase sea ABSTRACTA!!!!!!!
	**/


/**
int Polygon::getNumPolygons()const{
		return nPolygons;
}
**/

/**int Polygon::getNumSides()const{
		return points.getSize(); //EL numero de ptos coincide con el 
		//numero de lados

} 
**/

/**
const PointArray* Polygon::getPoints()const{
		return &points; //Retornamos la direccion de nuestro arreglo de puntos
		// y lo hacemos cte para que no pueda ser manipulado por otra clase
}
**/

/**
Polygon::~Polygon(){
	--nPolygons;
}
**/
 
