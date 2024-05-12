/*Todos los lunes, miércoles y viernes, una persona corre la misma ruta y cronometra los tiempos obtenidos. 
Determinar el tiempo promedio que la persona tarda en recorrer la ruta en una semana cualquiera.*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
int main(){
	int lunes,miercoles,viernes;
	float promedio;
	system("color B0");
	printf("\n\n\n\t\t\tIntroduce el tiempo recorrido el Lunes ");
	scanf("%d", &lunes);
	printf("\n\n\n\t\t\tIntroduce el tiempo recorrido el Miercoles ");
	scanf("%d", &miercoles);
	printf("\n\n\n\t\t\tIntroduce el tiempo recorrido el Viernes ");
	scanf("%d", &viernes);
	promedio=(lunes+miercoles+viernes)/3;
	system("cls");
	system("color 50");
	printf("\n\n\n\t\t\tEl tiempo promedio recorrido es %.1f \n\n\n\t\t\t", promedio);
}
