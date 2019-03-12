#include <iostream>
#include "Vector3D.h"
#include "Punto3D.h"
#include "Utilitarios.h"

using namespace std;

int main()
{
  // Vector3D vectorA = Vector3D(2,4,6);
  // Vector3D vectorB = Vector3D(1,9,2);

  // cout<<"Suma: " << endl;
  // vectorA.operator+(vectorB).mostrar();

  // cout<<"Resta: " <<endl;
  // (vectorA-vectorB).mostrar();

  // cout << "Producto Escalar: " << endl;
  // cout << (vectorA*vectorB) << endl;

  // cout << "Division de numeros: " << endl;
  // (vectorA/5).mostrar();

  Punto3D a = Punto3D(3,4,5);
  Punto3D b = Punto3D(3,6,2);
  // cout<< "Operaciones con Puntos:" << endl;

  // (a-b).mostrar();
  return 0;
}


    
// 
// using namespace std;
// int main() {
//     int dpi = 72;
//     int width = 640;
//     int height = 480;
//     int n = width * height;
//     ColorRGB* pixeles = new ColorRGB[n];
//     for(int x= 0; x < width; x++)
//     {
// 		for( int y = 0; y < height; y++)
// 		{
// 			pixeles[y*width+x].r = 0;
// 			pixeles[y*width+x].g = 2.3;
// 			pixeles[y*width+x].b = 0;
// 		}
        
//     }
//     savebmp("img.bmp", width, height, dpi, pixeles);
//     return 0;
// }