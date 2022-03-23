/*
Cree una función que calcule la raiz cuadrada de un número 
dado utilizando alguna función de la libreria math.h
*/

#include <iostream>
#include<math.h>

using namespace std;

int main ()
{
	float x, raizCuadrada = 0;
	
	cout << endl;
    cout << " *********** La Raiz Cuadrada ***********" << endl << endl;
    cout << " Introduzca el valor de x: ";
	cin >> x;

	// Esta funcion podemos usar para sacar la Raiz Cuadrada 
	raizCuadrada = sqrt (x);
	
	cout << endl;
	cout << " La raiz cuadrada de x es de: " << raizCuadrada << endl;
	
return 0;

}
