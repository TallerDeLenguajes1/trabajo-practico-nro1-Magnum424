#include <stdio.h>
#include <stdlib.h>

int main (){
	//Inicializo Variables
	int valor = 10;
	int *puntero;
	//Le asigno la direccion de memoria de "valor" al puntero
	puntero = &valor;
	//Muestro el contenido del puntero
	printf("%d\n",puntero);
	//Muestro la direccion de memoria almacenada por el puntero
	printf("%p\n",puntero);
	//Muestro la direccion de memoria de la variable
	printf("%p\n",&valor);
	//Muestro la direccion de memoria del puntero
	printf("%p\n",&puntero);
	//Muestro el tamaño de memoria utilizado por "valor"
	printf("%d",sizeof(valor));
	//Respuestas
	//El resultado del punto 2 y 3 es el mismo debido a que "puntero" almacena la direccion de memoria de la variable "valor" y no su contenido.
	//El resultado obtenido del punto 4 es distinto al resto dado que no se muestra lo que contiene "puntero" sino la direccion de memoria del mismo.
	return 0;
}
