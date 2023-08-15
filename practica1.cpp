/*
	Author: Gael Arturo & Nancy Jaqueline
	Date: 14/Aug/23
	Description: File creation and edition.
*/
#include <stdio.h>
#include <stdlib.h>

struct Libro{
	char titulo[100];
	char autor[100];
	char editorial[100];
	char ano[10];
	char numPaginas[100];
};


int main () {

	//Creamos array de tipo libro con 5 espacios
	struct Libro  libros[4];

	FILE *archivo;
	system("cls");
	int i;

	//Creamos un archivo de texto llamado biblioteca
	archivo = fopen("biblioteca.txt", "w");


		for(i=0;i<4;i++){
		printf("ingrese los detalles del libro %d:\n",i+1);
		printf("Titulo:");
		scanf("%s",libros[i].titulo);
		printf("Autor: ");
		scanf("%s",libros[i].autor);
		printf("Editorial: ");
		scanf("%s",libros[i].editorial);
		printf("Año: ");
		scanf("%d", libros[i].ano);
		printf("Número de páginas:");
		scanf("%d", libros[i].numPaginas);

	}
	//Usamos fprintf para escribir en el archivo
	//Libro 1
	fprintf(archivo, libros[0].titulo);
	fprintf(archivo, "\n");
	fprintf(archivo, libros[0].autor, "\n");
	fprintf(archivo, "\n");
	fprintf(archivo, libros[0].editorial, "\n");
	fprintf(archivo, "\n");
	fprintf(archivo, libros[0].ano, "\n");
	fprintf(archivo, "\n");
	fprintf(archivo, libros[0].numPaginas, "\n");
	fprintf(archivo, "\n");
	//Libro 2
	fprintf(archivo, libros[1].titulo);
	fprintf(archivo, "\n");
	fprintf(archivo, libros[1].autor, "\n");
	fprintf(archivo, "\n");
	fprintf(archivo, libros[1].editorial, "\n");
	fprintf(archivo, "\n");
	fprintf(archivo, libros[1].ano, "\n");
	fprintf(archivo, "\n");
	fprintf(archivo, libros[1].numPaginas, "\n");
	fprintf(archivo, "\n");
	//Libro 3
	fprintf(archivo, libros[2].titulo);
	fprintf(archivo, "\n");
	fprintf(archivo, libros[2].autor, "\n");
	fprintf(archivo, "\n");
	fprintf(archivo, libros[2].editorial, "\n");
	fprintf(archivo, "\n");
	fprintf(archivo, libros[2].ano, "\n");
	fprintf(archivo, "\n");
	fprintf(archivo, libros[2].numPaginas, "\n");
	fprintf(archivo, "\n");
	//Libro 4
	fprintf(archivo, libros[3].titulo);
	fprintf(archivo, "\n");
	fprintf(archivo, libros[3].autor, "\n");
	fprintf(archivo, "\n");
	fprintf(archivo, libros[3].editorial, "\n");
	fprintf(archivo, "\n");
	fprintf(archivo, libros[3].ano, "\n");
	fprintf(archivo, "\n");
	fprintf(archivo, libros[3].numPaginas, "\n");
	fprintf(archivo, "\n");
	//Libro 5
	fprintf(archivo, libros[4].titulo);
	fprintf(archivo, "\n");
	fprintf(archivo, libros[4].autor, "\n");
	fprintf(archivo, "\n");
	fprintf(archivo, libros[4].editorial, "\n");
	fprintf(archivo, "\n");
	fprintf(archivo, libros[4].ano, "\n");
	fprintf(archivo, "\n");
	fprintf(archivo, libros[4].numPaginas, "\n");
	fprintf(archivo, "\n");

	//Se notifica la creación del archivo
	printf("Has creado un archivo");
	printf("\n");


	fclose(archivo);

    int opcion;
	do {
        printf("1.-Modificar datos de libro \n");
        printf("2-.Cerrar programa\n");
	printf("Ingrese su opciòn:");
	scanf("%i", &opcion);
	switch (opcion) {
		case 1: 
		break;
	}
	}

	system("pause");
	return 0;
}



