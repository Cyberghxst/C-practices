/*Calcular el número de pulsaciones que debe tener una persona por cada 10 segundos de ejercicio aeróbico;
 la fórmula que se aplica cuando el sexo es femenino es:num. pulsaciones ? (220 - edad)/10 
 y el masculino es num. pulsaciones ?(210 - edad)/10:*/
 
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
int main ()
{
	float edad,ndp;
	setlocale(LC_ALL, "");
	system("color 1F");
	setlocale(LC_CTYPE, "Spanish");
	printf("\n\n\n\t\t\t\t\t\tMenú: ");
	printf("\n\n\n\t\t\t\t\t\t 1)Mujer: ");
	printf("\n\n\n\t\t\t\t\t\t 2)Hombre: ");
	printf("\n\n\n\t\t\t\t\t\t 2)Ingresa tu edad: ");
	scanf("%.1f",&Edad);
	if(edad==1)
	{
	ndp=(220–edad)/10;
	}
	else 
	{
	ndp=(210–edad)/10;
	}
	printf("n\n\n\n\n\t\t\tPor cada 10 segundos de ejercicio su pulsación es de %f.1\n",ndp);
}
