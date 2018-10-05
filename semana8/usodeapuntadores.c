/* Este es el primer ejemplo de apuntadores*/

#include<stdio.h>
	
	
	int main() {	

		int a=20; //Declaro la variable a=20
		int *ptr; // Declaro la variable del apuntador
		ptr = &a; // Asigno la dirección de la variable a al apuntador ptr


		printf("La dirección de la variable a es: %x\n", &a); 
	// Imprime la dirección de la variable a
		printf("Dirección guardada en el apuntador ptr: %x\n", ptr);
	// Imprime la dirección del apuntador
		printf("El valor de *ptr: %d\n",*ptr);
	//Imprime el valor del apuntador ptr
		return 0;
		}
		
