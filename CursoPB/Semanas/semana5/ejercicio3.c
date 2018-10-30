/*Este programa imprime a la pantalla, todos los números primers en un intervalo definido por el programador, o sea  yo*/

#include<stdio.h>
#include<math.h>
	int main()
		{
	 int x=0,x1,x2,y,z;
	 int i,j;
		printf("Hola\n");
		printf("Vamos a encontrar los números primos que hay dentro de un intervalo <= 100 \n");
		printf("Ingresa el valor mínimo de tu intervalo\n");
		scanf("%i",&x1);
		printf("Ingresa el valor máximo de tu intervalo\n");
		scanf("%i",&x2);
		while((x2-x1)>100)
		{	
		printf("NOTA:ESTE PROGRAMA FUNCIONA PARA INTERVALOS DE 100 DIGITOS\n");		
		printf("Ingresa un intervalo más pequeño (inicial,final)\n");		
		scanf("%i %i",&x1,&x2);
		}
		for (i=x1;i<=x2;i++)
		{
		y=1;
		z=sqrt(i);

		for(j=2; j<=z;j++)
		{
		if((i%j)==0){
                y=0;		
				}
				}	
		if(y==1){
		printf("%i\n",i);
		x=x+1;
			
		}
		}
	

	printf("\n");
	return 0;
	}
		
		

