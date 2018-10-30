/* Este es el tercer ejemplo utilizando if else*/

#include<stdio.h>
int main()
{
char c; 
// Estoy declarando las variables que se van a utilizar durante el programa
int a,b;
printf("Introduce una letra\n");
scanf("%c",&c);
//En esta parte estoy dando las condiciones para indicar lo que es una vocal y lo que no
a=(c=='a'|| c=='e' || c=='i' || c=='o' || c=='u');
b=(c=='A'|| c=='E' || c=='I' || c=='O' || c=='U');
if (a||b){
printf("%c es una vocal\n",c);
} else{
printf("%c es consonante\n",c);
}
  return 0;
}
