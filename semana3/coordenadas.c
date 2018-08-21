/* Este programa convierte coordenadas cartesianas a coordenadas esféricas */

#include<stdio.h>
#include<math.h>

int main()
{

float x,y,z,r,s,q;
printf("Convertiremos coordenadas cartesianas a coordenadas esféricas, por favor ingresa tu coordenada en el eje x\n");
scanf("%f",&x);
printf("Ingresa tu coordenada en el eje y\n");
scanf("%f",&y);
printf("Ingresa tu coordenada en el eje z\n");
scanf("%f",&z);
r=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
s=acos(z/r);
q=atan(y/x);
printf("Tus coordenadas en el plano esférico (r,θ,φ) son:\n");
printf("(%f,%f,%f)\n",r,s,q);
printf("Espero te haya funcionado, hasta la próxima\n");
printf("Estás son tus coordenadas iniciales (x,y,z) \n(%f,%f,%f)",x,y,z); 

return 0;
}
