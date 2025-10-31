#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NOM 40
#define NUMEM 100
#define SEX 2


struct Empleado
{
	char nombre [NOM];
	char sexo [SEX]; //M(Masculino) o F(Femenino)
	long sueldo;
};

void eliminarEnter(char cadena[]) {
	int longitud = strlen(cadena);
	cadena[longitud-1] = '\0';
}
void insertarEmpleado(struct Empleado empleado[], int buscadorContador){
	printf("Dame tu nombre completo : " );
	fgets(empleado[buscadorContador].nombre, NOM, stdin);
}
void mostrarMenu(){
	printf("Presiona 1 para insertar un Empleado");
}

void ejecutar(){
	struct Empleado empleado[NUMEM];
	struct Empleado *ptrEmpleado;
	int buscadorContador=0;
	int PorEncontrar=0,solicitado;
	char opcionChar,nombre[NOM];

	ptrEmpleado= empleado;

	while (solicitado!=2){
		mostrarMenu();
		fgets(solicitado,SEX,stdin);
		opcionChar= atoi(solicitado);
		switch(opcionChar){
	case 1:
		insertarEmpleado(empleado,1);
		break;
		}
	}

	

	}



int main(int argc, char const *argv[])
{
	return 0;
}
