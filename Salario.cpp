/*Calcular el nuevo salario de un obrero si obtuvo un incremento del 25% sobre su salario anterior.*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
int main(){
	int sa,in,sn;
	setlocale(LC_ALL, "spanish");
	system("color 30");
	printf("Porfavor introduce tu salario actual ");
    scanf("%d", &sa);
    in=sa*0.25;
    sn=sa+in;
    system("cls");
    system("color 20");
    printf("\n\n\n\t\t\tTu salario nuevo incrementado 25 porciento es de %d \n\n\n\n", sn);
	return 0;
}
