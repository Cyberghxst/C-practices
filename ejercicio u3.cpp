/*Hacer un programa que escriba en pantalla el nombre de un articulo, clave,precio original y su  precio con descuento, el descuento lo 
 hace en base a una clave, si la clave es 1, el descuento es del 10%, si la clave es 2, 
 el descuento es de 20%, recuerda, la clave solo es 1 y 2*/
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
int main ()
{
	char articulo[30];
	float descuento,total;
	int precio,clave;
	system("color F0");
	setlocale(LC_CTYPE, "Spanish");
	printf("\n\t\t\tIngresa el nombre del artículo: ");
	gets(articulo);
	printf("\n\t\t\tIngresa el precio del producto: ");
	scanf("%d",&precio);
	printf("\n\t\t\tIngresa una clave para obtener un descuento: ");
	scanf("%d",&clave);
	
	if(clave==1)
	{
		descuento=(precio*0.10);
		total=precio-descuento;
		system("cls");
		system("color A0");
		Beep(1000,350);
		Beep(1500,350);
		printf("\n\t\t\tProducto: "); puts(articulo);
		printf("\n\t\t\tDescuento: %.2f ",descuento); puts("pesos");
		printf("\n\t\t\tEl precio del producto es de: %.2f ",total); puts("pesos");
	}
	else
	{
		descuento=(precio*0.20);
		total=precio-descuento;
		system("cls");
		system("color A0");
		Beep(1500,350);
		Beep(2000,350);
		printf("\n\t\t\tProducto: "); puts(articulo);
		printf("\n\t\t\tDescuento: %.2f ",descuento); puts("pesos");
	    printf("\n\t\t\tEl precio del producto es de: %.2f ",total); puts("pesos");
	}
}
