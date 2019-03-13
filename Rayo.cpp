#include "Rayo.h"

/*
    de preferencia el origen tiene que valer 0
    mientras que la direccion tiene que inicializar en 1 (Por experiencia del magister)
*/
Rayo::Rayo(): o(0.0), d(0.0, 0.0, 1.0)
{}

Rayo::Rayo(const Punto3D& origen, const Vector3D& direccion): o(origen), d(direccion)
{}

Rayo::~Rayo(){}
