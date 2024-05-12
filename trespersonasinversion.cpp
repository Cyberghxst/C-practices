/*Tres personas deciden invertir su dinero para fundar una empresa. Cada una de ellas invierte una cantidad distinta. 
Obtener el porcentaje que cada quien invierte con respecto a la cantidad total invertida.*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
int main(){
	float cantidad1,cantidad2,cantidad3,porcentaje1,porcentaje2,porcentaje3,total;
	setlocale(LC_ALL, "spanish");
	system("color D0");
	printf("\n\n\n\t\t\tPor favor, introduzca la primera cantidad que se va a invertir ");
	scanf("%f", &cantidad1);
	printf("\n\n\n\t\t\tPor favor, introduzca la segunda cantidad que se va a invertir ");
	scanf("%f", &cantidad2);
	printf("\n\n\n\t\t\tPor favor, introduzca la tercera cantidad que se va a invertir ");
	scanf("%f", &cantidad3);
	total=cantidad1+cantidad2+cantidad3;
	porcentaje1=(cantidad1/total)*100;
	porcentaje2=(cantidad2/total)*100;
	porcentaje3=(cantidad3/total)*100;
	system("cls");
	system("color 80");
	printf("\n\n\n\t\t\tEl porcentaje obtenido con respecto a la inversión de la persona 1 es de %.1f \n\n\n\t\t\t", porcentaje1);
	printf("\n\n\n\t\t\tEl porcentaje obtenido con respecto a la inversión de la persona 2 es de %.1f \n\n\n\t\t\t", porcentaje2);
	printf("\n\n\n\t\t\tEl porcentaje obtenido con respecto a la inversión de la persona 3 es de %.1f \n\n\n\t\t\t", porcentaje3);
}

