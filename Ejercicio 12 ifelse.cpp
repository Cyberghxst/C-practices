/*Una compa��a de seguros est� abriendo un departamento de finanzas y estableci� un programa para captar clientes, 
que consiste en lo siguiente: si el monto por el que se efect�a la p�liza es menor que $50.000 la cuota a pagar ser� por el 3% del monto, 
y si el monto es mayor que $50.000 la cuota a pagar ser� el 2% del monto. 
La compa��a desea determinar cu�l ser� la cuota que debe pagar un cliente.*/
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
int main(){
	float monto,pago;
	setlocale(LC_CTYPE, "Spanish");
	system("color 5F");
	printf("\n\t\t\tIntrduzca el monto de la p�liza ");
	scanf("%f",&monto);
	if(monto>50000)
	{
		pago=monto*0.02;
		system("cls");
		system("color 10");
		printf("\n\t\t\tLa cuota por pagar del cliente es %.0f ",pago); puts("correspondiente al 2 porciento.");
	}
	else
	{
		pago=monto*0.03;
		system("cls");
		system("color 10");
		printf("\n\t\t\tLa cuota por pagar del cliente es %.0f ",pago); puts("correspondiente al 3 porciento.");
	}
}
