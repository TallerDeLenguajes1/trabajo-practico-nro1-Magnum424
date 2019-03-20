#include <stdio.h>
#include <stdlib.h>

int Cuadrado_int(int x);
void Cuadrado();
void mostrar_datos(int x);
void invertir(int a, int b);
void menor_mayor(int a,int b);
void menor_mayor_entrada();

int main (void){
	int numerito = 2;
	printf("%d\n",Cuadrado_int(numerito));
	Cuadrado();
	mostrar_datos(numerito);

	return 0;
}

int Cuadrado_int(int x){
	int cuadrado;
	cuadrado = x * x;
	return cuadrado;
}

void Cuadrado(){
	int x;
	printf("Ingrese el numero a elevar:\n");
	scanf("%d",&x);
	x = x * x;
	printf("Su numero elevado es: %d",x);
}

void mostrar_datos(int x){
	printf("%d",x);
	printf("%d",&x);
}

void invertir(int a, int b){
	int c;
	c = b;
	b = a;
	a = b;
	printf("a=%d//b=%d",a,b);
}

void menor_mayor(int a,int b){
	if (a<b)
	{
		printf("%d\n",a);
		printf("%d\n",b);
	}
	else{
		printf("%d\n",b);
		printf("%d\n",a);
	}
}

void menor_mayor_entrada(){
	int a,b;
	for (int i = 0; i < 5; ++i)
	{
		printf("Ingrese el primer numero:");
		scanf("%d",&a);
		printf("Ingrese el segundo numero:");
		scanf("%d",&b);
		if (a<b)
		{
			printf("%d\n",a);
			printf("%d\n",b);
		}
		else{
			printf("%d\n",b);
			printf("%d\n",a);
		}
	}	
}