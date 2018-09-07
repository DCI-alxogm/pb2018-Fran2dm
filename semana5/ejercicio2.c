/* Este programa calcula el factorial de un número dado por el usuario*/

#include<stdio.h>

	int main()
			{
	int x,i,f;
	int o=1;
	while(o==1)
			{
		f=1;	
		printf("Vamos a calcular el factorial de un número x\n");
		printf("Ingresa el valor de x\n");
		scanf("%i",&x);

	for(i=1;i<=x;i++)
			{
		f=f*i;
			}
		printf("%i\n",f);
		printf("¿Quieres realizar otra operación?\n");
		printf("En caso de querer realizar otra operación inserta 1\n");
		scanf("%i",&o);
			}

	return 0;
			}




