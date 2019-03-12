#include "Vector3D.h"
#include <iostream>
using namespace std;

Vector3D::Vector3D(double n)
{

}

Vector3D::Vector3D(double _x, double _y, double _z)
{
    x = _x;
    y = _y;    
    z = _z;
}

// Sobrecargamos el operador  +
Vector3D Vector3D::operator +( const Vector3D& v) const
{
    return (Vector3D(x+ v.x, y+v.y, z+v.z));
}

// sobrecargamos el operador -
Vector3D Vector3D::operator -( const Vector3D& v) const
{
    return (Vector3D(x- v.x, y-v.y, z-v.z));
}

// sobrecargamos el operador * (Que es el producto escalar)
double Vector3D::operator *( const Vector3D& v) const
{
    return (x* v.x + y*v.y + z*v.z);
}

//Sobrecargamos el operador / 

// Vector3D Vector3D::operator*( const double& v) const{
//     // return 
// } 

Vector3D Vector3D::operator^( const Vector3D& v) const{
    return (Vector3D( y * v.z - z * v.y, z * v.x - x * v.z, x * v.y - y * v.x));
}

Vector3D Vector3D::operator/( const double& n) const{
    return (Vector3D(x/n, y/n, z/n));
}

Vector3D operator* (double n, const Vector3D& v)
{
    return (Vector3D(n*v.x, n*v.y, n*v.z));   
}

void Vector3D::mostrar(){
    cout <<"X: " << x << endl;
    cout <<"Y: " << y << endl;
    cout <<"Z: " << z << endl;
}