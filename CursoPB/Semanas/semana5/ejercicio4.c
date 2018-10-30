#include<stdio.h>
#include<math.h>

int main(){
	
	int u=0;
	int w=0, x=0, y=0, z=0;
	char t[100];
	printf("\nHola, elige una operación:  \n 1)Converir binario a decimal \n 2)Convertir decimal a binario \n Escribe el número de opción: ");
	scanf("%i", &u);

		switch (u){
		case 1:
		printf("\n Introduce un número binario: ");
		scanf("%i", &w);
		while(w>0){
			x = w%10;
			if(x!=0){
				z+=pow(2,y);			
			}
			w/=10;
			y++;				
		}
		printf("\n El equivalente decimal es %i\n", z);
		break;
		case 2:
		printf("\nIntroduce un número decimal entero: ");
		scanf("%i", &z);
		printf("\n El equivalente binario es: ");
		while(z>0){
			if(z%2==1){
				t[y++]='1';		
			}			
			else{
				t[y++]='0';			
			}
			z/=2;
		}
		for(int i=y ; i>0 ; i--){
			printf("%c", t[i-1]);		
		}
		break;
	}
	printf("\n Hasta luego");
	return 0;
}
