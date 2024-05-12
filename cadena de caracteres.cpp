/*Hacer un programa que lea los datos que contiene una referencia bibliográfica (nombre del libro, editorial, autores, edición,
número de páginas), después de leerlos mostrarlos en pantalla identificando cada uno de los datos, y dándole una salida formateada en pantalla
Mostrar un color de fondo y texto para las entradas y otros colores diferentes de fondo y texto para las salidas.*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<locale.h>
int main(){
	char nombrelibro[50];
	char editorial[30];
	char autores[150];
	char edicion[20];
	char nopaginas[5];
	setlocale(LC_ALL, "spanish");
	system("color F0");
	printf("\n\t\t\t\tIntroduce el nombre del libro: ");
	gets(nombrelibro);
	printf("\n\t\t\t\tEscribe la editorial del libro: ");
	gets(editorial);
	printf("\n\t\t\t\tIntroduce el (o los) autore(s) del libro: ");
	gets(autores);
	printf("\n\t\t\t\tEscribe la edición correspondiente del libro: ");
	gets(edicion);
	printf("\n\t\t\t\tEscribe el número de páginas que posee el libro: ");
	gets(nopaginas);
	system("cls");
	system("color 4F");
	printf("\n\n\t\t\t\t\tLos datos del libro son: ");
	printf("\n\n\n\t\t\t\tNOMBRE DEL LIBRO: ");
	puts(nombrelibro);
	printf("\n\t\t\t\tEDITORIAL DEL LIBRO: ");
	puts(editorial);
	printf("\n\t\t\t\tAUTOR(ES) DEL LIBRO: ");
	puts(autores);
	printf("\n\t\t\t\tEDICIÓN DEL LIBRO: ");
	puts(edicion);
	printf("\n\t\t\t\tNÚMERO DE PÁGINAS QUE CONTIENE EL LIBRO: ");
	puts(nopaginas);
}
