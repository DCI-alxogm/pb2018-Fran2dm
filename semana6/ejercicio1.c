/* Este programa fue creado José Díaz Moya*/

#include<stdio.h>
		int main(){


			int N,i,x=0; //Estas variables se utilizan para calcular el promedio de los estudiantes a excepción de y y x.
		       
			int h,m, uno=0,dos=0,tres=0,cuatro=0,cinco=0,seis=0,siete=0,ocho=0,nueve=0;
		printf("Hola\n");
		printf("Este programa determina el promedio y que cantidad de alumnos hay por semestre(1-9) de los estudiantes,su sexo y el promedio de sus edades\n"); 
		printf("Por favor ingresa la cantidad de estudiantes\n");
		scanf("%i",&N);
			int s[N],S[N],E[N]; //s=sexo; S=semestre; E=edad 
			float P[N],p,y=0; //p=promedio;
		printf("Ingresa primero, sexo, (0) si es hombre y (1) si es mujer, después el semestre del alumno (1-9),luego la edad del alumno y al final su promedio\n");
		for(i=0;i<N;i++){
		printf("Sexo:\n");
		scanf("%i",&s[i]);
		x=x+s[i]; //Esta operación se utiliza para guardar la cantidad de mujeres
		
		printf("Semestre:\n");
		scanf("%i",&S[i]);
		if(S[i]==1) uno=uno+1;
		if(S[i]==2) dos=dos+1;
		if(S[i]==3) tres=tres+1;
		if(S[i]==4) cuatro=cuatro+1;
		if(S[i]==5) cinco=cinco+1;
		if(S[i]==6) seis=seis+1;
		if(S[i]==7) siete=siete+1;
		if(S[i]==8) ocho=ocho+1;
		if(S[i]==9) nueve=nueve+1;
		// De acuerdo al semestre ingresado se le suma 1 a la cuenta de los alumnos por semestre
		
		printf("Edad:\n");
		scanf("%i",&E[i]);
		y=y+E[i];		
	
		
		printf("Promedio\n");
		scanf("%f",&P[i]);
		p=p+P[i];
		}


		/*promedio*/ p=p/N;		
		/*Cantidad de hombres*/ h=N-x;
		/*promedio edad*/ y=y/N;
		
		printf("La cantidad de alumnos que ingresaste es %i de los cuales son %i hombres y %i mujeres\n",N,h,x);
		printf("Los alumnos en primer semestre son %i\n",uno);
		printf("Los alumnos en segundo semestre son %i\n",dos);
		printf("Los alumnos en tercer semestre son %i\n",tres);
		printf("Los alumnos en cuarto semestre son %i\n",cuatro);
		printf("Los alumnos en quinto semestre son %i\n",cinco);
		printf("Los alumnos en sexto semestre son %i\n",seis);
		printf("Los alumnos en octavo semestre son %i\n",ocho);	
		printf("Los alumnos en noveno semestre son%i\n",nueve);
		printf("La edad promedio de los alumnos es %f\n",y);
		printf("El promedio de las calificaciones de todos los estudiantes es %f\n",p);
		
		return 0;
		}
