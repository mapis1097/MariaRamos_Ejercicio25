funciones.dat : funciones.x
	./funciones.x
	./funciones.x > funciones.dat
funciones.x : clase25.cpp
	c++ clase25.cpp -o funciones.x

	