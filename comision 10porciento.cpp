/*Un vendedor recibe un sueldo base más un 10% extra por comisión de sus ventas, 
el vendedor desea saber cuánto dinero obtendrá por concepto de comisiones 
por las tres ventas que realiza en el mes y el total que recibirá en el mes 
tomando en cuenta su sueldo base y comisiones.*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
int main(){
	int sueldo,comision,total;
	setlocale(LC_ALL, "spanish");
	system("color 60");
	printf("\n\n\n\t\t\tIngresa tu sueldo base ");
	scanf("%d", &sueldo);
	comision=(sueldo*0.10);
	total=sueldo+comision;
	system("cls");
	system("color F0");
	printf("\n\n\n\t\t\tPor concepto de comisiones, tú recibirás %d ", comision);
	printf("\n\n\n\t\t\tEn total tú recibirás %d ", total);
	return 0;
	
}
