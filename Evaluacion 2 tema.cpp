/*Realice el siguiente programa, ejecute y compruebe los resultados generados
1) Lea los coeficientes necesarios para resolver el sistema de ecuaciones, de tal manera que obtenga 
los valores de x, y.
 x= (ce-be) / (ae – bd)
 y= (af-cd) / (ae – bd)*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
int main(){
	float a,b,c,d,e,f,x,y;
	system("color E0");
	printf("\n\t\t\tPara conocer el valor de x,y, introduce el valor de a: ");
	scanf("%f", &a);
	printf("\n\t\t\tAhora el valor de b: ");
	scanf("%f", &b);
	printf("\n\t\t\tIntroduce el valor de c: ");
	scanf("%f", &c);
	printf("\n\t\t\tAhora el valor de d: ");
	scanf("%f", &d);
	printf("\n\t\t\tIntroduce el valor de e: ");
	scanf("%f", &e);
	printf("\n\t\t\tAhora el valor de f: ");
	scanf("%f", &f);
	x=(c*e-b*e)/(a*e-b*d);
	y=(a*f-c*d)/(a*e-b*d);
	system("cls");
	system("color 30");
	printf("\n\t\t\t\t\tX= %.2f ", x);
	printf("\n\t\t\t\t\tY= %.2f ", y);
	printf("\n\n\t\t\t\t Jeffrey Villatoro Quezada");
	
}
