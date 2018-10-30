#include<stdio.h>
#include<stdlib.h>
int main () 
{
	int *ptr,i,n1,n2;
	printf("Introduce el numero de elementos");
	scanf("%d",&n1);
	printf("\nIntroduce el nuevo número de elementos n2:");
	scanf("%d",&n2);
	ptr = (int*) malloc (n1*sizeof(int));
	printf("Dirección de la memoria reservada");
	for(i=0; i<n1; i++){
		printf("%x\t",ptr+1);
		}
	ptr=realloc(ptr,n2);
	for(i=0; i<n2; i++){
		printf("%u\t",ptr+1);
		}
	free(ptr);
		return 0;
	}
