/* Este programa fue creado José Díaz Moya*/

#include<stdio.h>
		int main(){
		FILE *lectura;
		lectura = fopen("Datos.txt","r");
			int N,i,x=0; //Estas variables se utilizan para calcular el promedio de los estudiantes a excepción de y y x.
		       
			int h,m, uno=0,dos=0,tres=0,cuatro=0,cinco=0,seis=0,siete=0,ocho=0,nueve=0;
		
		fscanf(lectura,"%i",&N);
			int s[N],S[N],E[N]; //s=sexo; S=semestre; E=edad 
			float P[N],p,y=0; //p=promedio;
		
		for(i=0;i<N;i++){
		fscanf(lectura,"%i",&s[i]);
		x=x+s[i]; //Esta operación se utiliza para guardar la cantidad de mujeres
		
		
		fscanf(lectura,"%i",&S[i]);
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
		
		fscanf(lectura,"%i",&E[i]);
		y=y+E[i];		
	
		
		
		fscanf(lectura,"%f",&P[i]);
		p=p+P[i];
		}

		fclose(lectura);




		FILE *res;
		res = fopen("Resultados.txt","w");



		/*promedio*/ p=p/N;		
		/*Cantidad de hombres*/ h=N-x;
		/*promedio edad*/ y=y/N;
		
		fprintf(res,"La cantidad de alumnos que ingresaste es %i de los cuales son %i hombres y %i mujeres\n",N,h,x);
		fprintf(res,"Los alumnos en primer semestre son %i\n",uno);
		fprintf(res,"Los alumnos en segundo semestre son %i\n",dos);
		fprintf(res,"Los alumnos en tercer semestre son %i\n",tres);
		fprintf(res,"Los alumnos en cuarto semestre son %i\n",cuatro);
		fprintf(res,"Los alumnos en quinto semestre son %i\n",cinco);
		fprintf(res,"Los alumnos en sexto semestre son %i\n",seis);
		fprintf(res,"Los alumnos en octavo semestre son %i\n",ocho);	
		fprintf(res,"Los alumnos en noveno semestre son%i\n",nueve);
		fprintf(res,"La edad promedio de los alumnos es %f\n",y);
		fprintf(res,"El promedio de las calificaciones de todos los estudiantes es %f\n",p);
		fclose(res);
		
		return 0;
		}
