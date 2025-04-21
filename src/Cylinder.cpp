# ifndef CYLINDER_CPP
# define CYLINDER_CPP
#include <iomanip>
#include <math.h>
#include<iostream>
# include "Cylinder.h"

using namespace std;

double Cylinder :: SurfaceArea(){

    double total = 0.0;
    
    total = (M_PI)*radius*radius*2 + 2*(M_PI)*radius*height;
    
    return total;
}

double Cylinder :: Volume(){

    double total = 0.0;
    
    total = (M_PI)*radius*radius*height;

    return total;
}

double Cylinder :: Circumference(){
 
    double temp = 0.0;
    
    temp = 2*(M_PI)*radius;

    return temp;

}

istream & operator>>(istream & in, Cylinder & cldr)
{

    in >> cldr.radius >> cldr.height;

    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out << "Circumference: " << fixed << std::setprecision(3) << cldr.Circumference() << endl;
    out << "SurfaceArea: " << fixed << std::setprecision(3) << cldr.SurfaceArea() << endl;
    out << "Volume: " << fixed << std::setprecision(3) << cldr.Volume() << endl;
    
    
    return out;
}
# endif
