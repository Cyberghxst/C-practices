/*Una tienda ofrece un descuento del 15% sobre el total de la compra 
y un cliente desea saber cuánto deberá pagar finalmente por su compra.*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
int main(){
	int precio,descuento,total;
	setlocale(LC_ALL, "spanish");
	system("color 30");
    printf("Porfavor intruduzca el precio del producto ");
    scanf("%d", &precio);
    descuento=precio*0.10;
    total=precio-descuento;
    system("cls");
    system("color 20");
    printf("\n\n\n\t\t\tCon el descuento del 10 porciento aplicado, este producto costará %d \n\n\n\n", total);
	return 0;
}
