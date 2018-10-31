#include<stdio.h>
#include<stdlib.h>


double **bordes(double **m, int n, double a, double b, double c, double d){ //Esta funcion se utiliza para darle valores a los bordes de la matriz
	

	for (int i=0; i<(n+1);i++){ 
	
		m[i][0]=a; // izquierdo
		m[0][i]=b; //borde superior
		m[i][n+1]=c; // borde derecho
		m[n+1][i]=d; //borde inferior
	
	}

return m; 

}
double **cero(double **m, int a){ 
	
	for (int i = 1; i<(a+1); i++){
		for (int j=1; j<(a+1); j++){

			
			m[i][j]=0.0; //Esta funcion inicializa la matriz en 0

		}
	}

return m; 
}
void **crear(double **m, int a, int q, double p, double Ei){ //Esta matriz crea archivos llamados nResultados.txt


FILE *fp1; //Declaro variable 

	if (p>Ei){	
		char arc[14];
		sprintf(arc,"%iResultados.txt",q);
		
		fp1 = fopen(arc, "w");
	}


	if (p<Ei){
	
		fp1= fopen("Ultima iteración.txt", "w");
	}


	for (int i = 0; i < (a+2); i++) {
	        for (int j = 0; j < (a+2); j++) {
	            fprintf(fp1, "%f ", m[i][j]); //Se imprime la matriz en el archivo
	        }
        fprintf(fp1, "\n"); 
	}

fclose(fp1);
}
