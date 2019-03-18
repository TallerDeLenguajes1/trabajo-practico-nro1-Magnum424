#include <stdio.h>
#include <stdlib.h>

int main (void){
	int numerito = 2;
	Cuadrado_int(numerito);
	return;
}
int Cuadrado_int(int x){
	int cuadrado;
	cuadrado = x * x;
	return cuadrado;
}
void Cuadrado(){
	int x;
	printf("Ingrese el numero a elevar:\n");
	scanf("%d",x);
	x = x * x;
	printf("Su numero elevado es: %d",x);
}
void mostrar_datos(int x){
	printf("%d",x);
	printf("%p",&x);
}