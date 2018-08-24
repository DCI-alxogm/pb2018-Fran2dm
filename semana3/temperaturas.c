/* Programa que convierte temperaturas en grados centigrados a kelvin y a farenheit y finalmente de farenheit a centigrados de regreso*/

 #include<stdio.h>

int main()

{

 float Tc,Tk,Tf;

printf("Vamos a empezar a convertir temperaturas\n");
printf("Ingresa una temperatura en grados centígrados\n");
scanf("%f",&Tc);
printf("La primera temperatura es en Kelvin y la segunda es en Farenheit\n");
Tk=Tc+273.15;
printf("Esta es tu primer temperatura %f\n",Tk);
Tf=(Tc*1.8)+32;
printf("Esta es tu segunda temperatura %f\n",Tf);
printf("Ahora vamos a regresar de farenheit a centigrados\n");
Tc=(Tf-32)/1.8;
printf("Esta es la temperatura que ingresaste%f\n",Tc);

return 0;

}
