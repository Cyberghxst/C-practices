/*El dueño de una tienda compra un articulo a un precio determinado. 
Obtener el precio en que lo debe vender para obtener una ganancia del 30%.*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
int main(){
	int precio,ganancia,total;
	system("color E0");
	printf("\n\n\n\t\t\tPorfavor introduce el precio del producto ");
	scanf("%d", &precio);
	ganancia=precio*0.30;
	total=ganancia+precio;
	system("cls");
	system("color 30");
	printf("\n\n\n\t\t\tPara obtener una ganancia del 30 porciento en este producto, debes venderlo en %d \n\n\n\t\t\t", total);
}
