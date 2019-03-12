#ifndef VECTOR3D_H
#define VECTOR3D_H

class Vector3D
{
    public:
    double x,y,z;

    public:
    Vector3D(double n);
    Vector3D(double x,double y,double z);

    /*Sobrecargamos para que usemos nuestras propias operaciones
    ademas de que el codigo de ve mas natural.
    a.sumar(b)
    a+(sobrecargado)b
    
    El & es un paso por referencia*/
    Vector3D operator+( const Vector3D& v) const; 
    Vector3D operator-( const Vector3D& v) const; 
    double operator*( const Vector3D& v) const; 
    Vector3D operator*( const double& v) const; //vector por constante
    Vector3D operator^( const Vector3D& v) const;
    Vector3D operator/( const double& n) const; 
    friend Vector3D operator* (double n, const Vector3D& v);
    void mostrar();
};  

#endif