/*Práctica#12                                                    Silva Rodríguez Paloma Mariel
Fecha de entrega:17 de Enero de 2021*/


//Declaración de librería
#include <stdio.h>

//Funciones llamadas durante la funcion principal para cada problema:
void ahorros_Anuales();
void clasificacion_numeros();
void numeros_pares_cien();

//Declaración de variables globales: No hay



//Declaración de la función principal
int main(){
	
	//Variable para la estructura switch y escoger un problema
	unsigned int sel=0;
	
	//Estructura de iteración 'do-while' para iterar todo el código
	do{
	
	//Menú para escoger el problema:
	
		printf("Menu\n\n\n\n");
	
		printf("\tPor favor seleccione el problema que guste resolver:\n\n\n");
	
		printf(" 1. Ahorros anuales con depositos variables mensuales.\n\n");
		printf(" 2. Conteo de numeros determinados mayores a cero y menores a cero.\n\n");
		printf(" 3. Numeros pares entre 0 y 100.\n\n");
		printf(" 4. Salir.\n\n");
	
	
		printf("\n\nProblema: ");
		scanf("%u", &sel);
	
	//Selección de instrucciones para cada problema
		switch (sel) {
		
		
			default:
				printf("\n\n\t\tNo tengo tantos problemas resueltos. Lo siento :(\n");
				printf("\n\n\nEso es todo. Muchas gracias por su tiempo. Vuelva pronto.");
				printf("\n\n");
			break;
		
		
			case 1:
				printf("\n\n\n\n\t\t\tPrograma para calcular los ahorros anuales con depositos variables en dolar.\n\n");
				ahorros_Anuales();
				printf("\n\n\nEso es todo. Muchas gracias por su tiempo. Vuelva pronto.");
				printf("\n\n");
			break;
		
		
			case 2:
				printf("\n\n\n\n\t\t\tPrograma para contabilizar N numeros mayores, menores e iguales a cero.\n\n");
				clasificacion_numeros();
				printf("\n\n\nEso es todo. Muchas gracias por su tiempo. Vuelva pronto.");
				printf("\n\n");
			break;
		
		
			case 3:
				printf("\n\n\n\n\t\t\tPrograma para generar e imprimir los numeros pares de 0 a 100\n\n");
				numeros_pares_cien();
				printf("\n\n\nEso es todo. Muchas gracias por su tiempo. Vuelva pronto.");
				printf("\n\n");
			break;
		
		setbuf(stdin, NULL); // limpia el buffer del teclado
		
		}
	
	//Final de la estructura de iteración 'do-while' para repetir el código las veces que se desee
	} while (sel != 4);
	
	return 0;
}

	/* 1.-Determinar cuánto ahorrará una persona en un año, si al final de cada
	mes deposita variables cantidades de dinero; además, se requiere saber cuánto
	lleva ahorrado cada mes. */

void ahorros_Anuales(){
	
	//Declaración de variables locales 
	//Uso de variables para saber las veces que se harán depósitos y saber por cuánto son
	#define LIMITE 12
	float ahorros=0, depositos=0;
	char op='n';
	unsigned int meses=1;
	
	//ciclo por si se gusta realizar más de una vez
	do {
		
		//Ciclo para almacenar los depósitos de cada mes
		//Usé 'for' debido a que se debe realizar al menos una vez y se aprovechan sus tres acciones
		for (meses=1; meses<=LIMITE; meses++) {
		
			printf("\n\n\nPara el mes numero %d", meses);
			printf(". Cuanto dinero deposito al final del mes? "); scanf("%f", &depositos);
			ahorros+=depositos;
			printf("\nLos ahorros de este mes son %f dolares", ahorros);
				
			}
	
		printf("\n\n\nSus ahorros de estos doce meses son: %f dolares", ahorros);
		
		//El programa termina y se pregunta al usuario si desea repetirlo
		printf("\n\n\nDesea reiniciar el programa? S/N\n");
		//scanf("%c", &op); printf("%c", op); ... Alternativa de getchar para leer la varieble 'op' 
		setbuf(stdin, NULL);
		op=getchar();
		
	} while (op == 'S' || op == 's'); //Indistinto si es mayúscula o minúscula

	return;
}

//2.-Determinar, de N cantidades, cuántas son menores o iguales a cero y cuántas mayores a cero.

void clasificacion_numeros(){
	
	//Declaración de variables locales para el ciclo, los contadores de clasificación y el número a clasificar
	//Uso de variables para saber si son negativas o positivas
	char re='n';
	unsigned int N=0, P=0;
	float nc=0;

	//Se usa la estructura 'do-while' para añadir los N números que desee el usuario sin conocerlos
	//Así solo se usa solo una variable en lugar de dos para la iteración
	do {
		printf("\nIngrese el número de cantidades a determinar: "); scanf("%f", &nc);
		nc<=0 ? N++ : P++;
		
		//Ciclo para iterar la cantidad N de números hasta que el usuario decida dicha cantidad
		if (nc<=0) {
			printf("\nEl numero es menor o igual a cero");
			//Mn++;
			printf("\n\nHasta ahora las cantidades iguales o menores a cero son: %o", N);
			printf("\nHasta ahora las cantidades mayores a cero son: %o", P);
		}
		else {
			printf("\nEl numero es mayor a cero"); 
			//My++;
			printf("\n\nHasta ahora las cantidades mayores a cero son: %o", P);
			printf("\nHasta ahora las cantidades iguales o menores a cero son: %o", N);
		}
		
		printf("\n\n\nDesea agregar y clasificar otro numero? Y/N\n");
		setbuf(stdin, NULL);//Evitamos errores al borrar la memoria
		//scanf("%c", &re); printf("%c", re); ... Alternativa al getchar para el caracter
		re=getchar();
		
	} while (re == 'Y' || re == 'y'); //Indistinto si es mayúscula o minúscula
		
	//Interfaz cuando se termine de iterar
	printf("\n\n\nLas cantidades negativas: %o", N);
	printf("\n\nLas cantidades positivas son: %o", P);
	
	return;
}

	//3.-Generar e imprimir los números pares que se encuentran entre 0 y 100.
void numeros_pares_cien(){
	
	//Declaración de variable local para el ciclo e impresión de los numeros pares
	//Uso de variables para identificar sólo los números pares
	unsigned int cont;
	
	//Arreglo de los números pares
	printf("\nSe generaran e imprimiran los numeros pares que se encuentran entre cero y cien:\n");
	printf("\n\n[ ");

	//Usa la estructura de repetición 'for' para repetirlo hasta cien
	for (cont=0; cont<100; cont++){
		
	//Ciclo para separar e imprimir los numeros pares hasta cien
		if (cont%2 == 0){
			printf("%d, ", cont);
			continue;
		}
	
	}
	if (cont==100)
		printf("%d ", cont);
		
	//Final del arreglo
	printf(" ]\n\n");
	
	return;
	
}
