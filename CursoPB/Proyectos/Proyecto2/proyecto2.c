/*Este programa fue creado por José Díaz*/



#include<stdio.h> 
#include<stdlib.h>
		
		/*Se declaran estás funciones*/
		double **cero(double **m, int a);
		double **bordes(double **m, int n, double a, double b, double c, double d); 
		void **crear(double **m, int a, int q, double p, double ex);


		int main(){

		double **matriz, x, x1, y, y1;  //Variables utilizadas para el programa x,x1,y,y1 son los lados de la matriz
		double Ei, e=0, p=100, epsilon; //Ei es un error inicial dado por el usuario, e es un contador, epsilon se calcula más adelante,p se utiliza para el calculo de los errores 
		int n, q=0; //n es el tamaño de la matriz y q es otro contador que se utiliza en el ciclo while 
		FILE *fp; //Declaro variable 

			fp = fopen("Datos.txt", "r"); //abro mi archivo Datos.txt
			fscanf(fp, "%i %lf %lf %lf %lf %lf ",&n ,&x, &x1, &y, &y1, &Ei);
			fclose(fp); //Cierro archivo 


			matriz = (double **) malloc((n+2)  * sizeof(double*)); //Guardo espacio de memoria para la matriz en esta y las 3 lineas siguientes
			for (int i=0;i<(n+2);i++){
				matriz[i]= (double *) malloc((n+2) * sizeof(double)); 
			}

			matriz = cero(matriz, n);//Ejecuto la función cero
			matriz = bordes(matriz, n, x, x1, y, y1);//Ejecuto la función bordes

			while(p>Ei){ //Este ciclo se va a ejecutar mietnras p sea mayor que Ei 
				q=q+1;
				for (int i = 1; i<(n+1); i++){
					for (int j=1; j<(n+1); j++){
	
			matriz[i][j]= ((matriz[i+1][j]+matriz[i][j+1]+matriz[i-1][j]+matriz[i][j-1])/4.0);
				}} //Calculo los valor de la matriz
		

				epsilon= (matriz[1][1]-e)/matriz[1][1];
				e= matriz[1][1];
				p = epsilon*100;

				if (q%10==0 || p<Ei){
					crear(matriz, n, q/10, p, Ei);//Ejecuto la funcion crear.
					}
	
				if (q>700){
					printf("Error, numero de iteraciones exedidas %i\nEl error calculado fue de %f\n",q ,p);
					p = p-100.0; //Esta operación se realiza con el fin de poder imprimir un archivo con nombre distinto a los demás
				crear(matriz, n, q/10, p, Ei);
				return 0; 
				}
				}
		
			printf("El programa se ejecutó correctamente\n");
			printf("Se hicieron un numero total de %i iteraciones\n", q);
			free(matriz);  //Se libera la memoria utilizada por mat


			return 0; 
			}

