/*Hacer un programa que calcule el total a pagar por la compra de camisas. Si se compran tres camisas o m�s 
se aplica un descuento del 20% sobre el total de la compra y si son menos de tres camisas un descuento del 10% */
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
int main(){
	int precio,descuento,total,desctotal;
	int piezas;
	setlocale(LC_ALL, "spanish");
	system("color 10");
	printf("\n\t\tPorfavor, introduzca cuantas camisas est� comprando ");
	scanf("%d", &piezas);
	printf("\n\t\tPorfavor, introduzca el precio de las camisas ");
	scanf("%d", &precio);
	switch(piezas)
	{
	case 1: 
	total=precio*piezas;
	descuento=total*0.10;
	desctotal=total-descuento;
	system("color A0");
	printf("\n\n\n\t\t\tPagar�s %d ",desctotal); puts("pesos");
	break;
	case 2:
	total=precio*piezas;
	descuento=total*0.10;
	desctotal=total-descuento;
	system("color A0");
	printf("\n\n\n\t\t\tPagar�s %d ",desctotal); puts("pesos");	
	break;
	case 3:
	system("color A0");
	total=precio*piezas;
	descuento=total*0.20;
	desctotal=total-descuento;
	printf("\n\n\n\t\t\tPagar�s %d ",desctotal); puts("pesos");
	break;
	case 4:
	system("color A0");
	total=precio*piezas;
	descuento=total*0.20;
	desctotal=total-descuento;
	printf("\n\n\n\t\t\tPagar�s %d ",desctotal); puts("pesos");
	break;
	case 5:
	system("color A0");
	total=precio*piezas;
	descuento=total*0.20;
	desctotal=total-descuento;
	printf("\n\n\n\t\t\tPagar�s %d ",desctotal); puts("pesos");
	break;
	case 6:
	system("color A0");
	total=precio*piezas;
	descuento=total*0.20;
	desctotal=total-descuento;
	printf("\n\n\n\t\t\tPagar�s %d ",desctotal); puts("pesos");
	break;
	case 7:
	system("color A0");
	total=precio*piezas;
	descuento=total*0.20;
	desctotal=total-descuento;
	printf("\n\n\n\t\t\tPagar�s %d ",desctotal); puts("pesos");
	break;
	case 8:
	system("color A0");
	total=precio*piezas;
	descuento=total*0.20;
	desctotal=total-descuento;
	printf("\n\n\n\t\t\tPagar�s %d ",desctotal); puts("pesos");
	break;
	case 9:
	system("color A0");
	total=precio*piezas;
	descuento=total*0.20;
	desctotal=total-descuento;
	printf("\n\n\n\t\t\tPagar�s %d ",desctotal); puts("pesos");
	break;
	case 10:
	system("color A0");
	total=precio*piezas;
	descuento=total*0.20;
	desctotal=total-descuento;
	printf("\n\n\n\t\t\tPagar�s %d ",desctotal); puts("pesos");
	break;
}
}
