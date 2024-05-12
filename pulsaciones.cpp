/*Calcular el número de pulsaciones que una persona debe tener por cada 10 segundos de ejercicio, si la formula es:
num. pulsaciones = (220 - edad)/10*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
int main(){
	float pulsaciones,edad;
	setlocale(LC_ALL, "spanish");
	system("color 90");
	printf("\n\n\n\t\t\tPorfavor indica tu edad ");
	scanf("%f", &edad);
	pulsaciones=(220-edad)/10;
	system("cls");
	system("color F0");
	printf("\n\n\n\t\t\tTu número de pulsaciones por cada 10 segundos de ejercicio es %.2f \n\n\n\t\t\t ", pulsaciones);
	
	
}

