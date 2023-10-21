#ifndef POINT2D_H
#define POINT2D_H

#include <ostream>
#include <cmath>
class Point2D{
	public:
       		double x;
		double y;
	
	private:
		Point2D(double x=0, double y=0){
		this->x=x;
		this->y=y;
		}

		static double distance(const Point2D &a, const Point2D &b){
		double distancia;
		double resta=a.x-b.x;
		resta=pow(resta,2);
		double resta2=a.y-b.y;
		resta2=pow(resta2,2);
		distancia=resta+resta2;
		distancia=sqrt(distancia);
		return distancia;		
		}

		friend bool operator==(const Point2D &a, const Point2D &b){
		if (a.x==b.x && a.y==b.y)
			return true;
		else
			return false;
		
		}
		friend bool operator!=(const Point2D &a, const Point2D &b){
		if(a.x!=b.x || a.y!=b.y)
			return true;
		else
			return false;
		
		}
		friend std::ostream& operator<<(std::ostream &out, const Point2D &p){
		out<<std::endl;
		out<<p.x<<"  "<<p.y;
		out<<std::endl;
		return out;
		}

};


#endif
