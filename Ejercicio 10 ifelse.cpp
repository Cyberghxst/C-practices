/*En un supermercado se hace una promoci�n, 
mediante la cual el cliente obtiene un descuento dependiendo de un n�mero que se escoge al azar. 
Si el n�mero escogido es menor que 74 el descuento es del 15% sobre el total de la compra, 
si es mayor o igual a 74 el descuento es del 20%. Obtener cu�nto dinero se le descuenta.*/
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
int main(){
	float numero,descuento,total,precio;
	setlocale(LC_CTYPE, "Spanish");
	system("color F0");
	printf("\n\t\t\tPorfavor, escriba el monto total de la compra ");
	scanf("%f",&precio);
	printf("\n\t\t\tPorfavor, escriba alg�n n�mero para obtener un descuento ");
	scanf("%f",&numero);
	if(numero>=74)
	{
		descuento=precio*0.20;
		total=precio-descuento;
		system("cls");
		system("color 2F");
		printf("\n\t\t\t�Felicidades! Tu descuento es %.0f ",descuento); puts("pesos, correspondientes a un 20 porciento."); 
		printf("\n\t\t\tEn total pagar�s %.0f ",total); puts("pesos.");
	}
	else
	{
		descuento=precio*0.15;
		total=precio-descuento;
		system("cls");
		system("color 2F");
		printf("\n\t\t\t�Felicidades! Tu descuento es %.0f ",descuento); puts("pesos, correspondientes a un 15 porciento."); 
		printf("\n\t\t\tEn total pagar�s %.0f ",total); puts("pesos.");
	}
}
