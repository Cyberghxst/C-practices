//Leer tres n�meros diferentes e imprimir el n�mero mayor de los tres.
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
int main(){
	int a,b,c;
	setlocale(LC_CTYPE, "Spanish");
	system("color 90");
	printf("\n\t\t\tIntroduzca primer n�mero ");
	scanf(" %d",&a);
	printf("\n\t\t\tIntroduzca segundo n�mero ");
	scanf(" %d",&b);
	printf("\n\t\t\tIntroduzca tercer n�mero ");
	scanf(" %d",&c);
	if(a>b)
	{
		if(a>c)
		{
			system("color B0");
			printf("\n\t\t\tEl n�mero %d ",a); puts(" es el mayor.");
		}
		else
		{
			system("color B0");
			printf("\n\t\t\tEl n�mero %d ",c); puts(" es el mayor.");
		}
	}
	else
	{
		if(b>c)
		{
			system("color B0");
			printf("\n\t\t\tEl n�mero %d",b); puts(" es el mayor.");
		}
		else
		{
			system("color B0");
			printf("\n\t\t\tEl n�mero %d",c); puts(" es el mayor.");
		}
	}
}
