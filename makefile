# main: vector3d.o utilitarios.o 
# 	g++ vector3d.o utilitarios.o main.cpp -o graficas

# vector3d.o: vector3d.cpp vector3d.h 
# 	g++ -c vector3d.cpp 

# utilitarios.o: utilitarios.cpp utilitarios.h ColorRGB.h
# 	g++ -c utilitarios.cpp 


main: vector3d.o punto3D.o rayo.o
	g++ vector3d.o punto3D.o rayo.o main.cpp -o graficas

vector3d.o: vector3d.cpp vector3d.h 
	g++ -c vector3d.cpp 

punto3D.o: punto3d.cpp punto3d.h
	g++ -c punto3d.cpp

rayo.o: rayo.cpp rayo.h
	g++ -c rayo.cpp