/*Un alumno desea saber cuál será su calificación final en la materia de Algoritmos. 
Dicha calificación se compone de los siguientes porcentajes:
55% del promedio de sus tres calificaciones parciales.
30% de la calificación del examen final. 
15% de la calificación de un trabajo final.*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
int main(){
	float parcial1,parcial2,parcial3,promgenparcial,examfinal,trabajofinal,calificacionexamfinal,calificaciontrabajofinal,promediogeneral;
	setlocale(LC_ALL, "spanish");
	system("color F0");
	printf("\n\n\n\t\t\tIngresa la calificación del primer parcial ");
	scanf("%f", &parcial1);
	printf("\n\n\n\t\t\tIngresa la calificación del segundo parcial ");
	scanf("%f", &parcial2);
	printf("\n\n\n\t\t\tIngresa la calificación del tercer parcial ");
	scanf("%f", &parcial3);
	printf("\n\n\n\t\t\tIngresa la calificación de tu examen final ");
	scanf("%f", &examfinal);
	printf("\n\n\n\t\t\tIngresa la calificación de tu trabajo final ");
	scanf("%f", &trabajofinal);
	promgenparcial=((parcial1+parcial2+parcial3)/3)*0.55;
	calificacionexamfinal=examfinal*0.30;
	calificaciontrabajofinal=trabajofinal*0.15;
	promediogeneral=promgenparcial+calificacionexamfinal+calificaciontrabajofinal;
	system("cls");
	if (promediogeneral>7)
	{		
	system("color A0");
	printf("\n\n\n\t\t\t¡Felicidades! Aprobaste con %.1f \n\n\n\t\t\t", promediogeneral);
	}
	else
	{
	system("color 40");
	printf("\n\n\n\t\t\t¡Rayos! Tu calificación es %.1f \n\n\n\t\t\t", promediogeneral);	
	}
	
}

