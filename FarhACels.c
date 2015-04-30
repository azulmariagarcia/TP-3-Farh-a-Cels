/*Este programa modifica la temperatura que se encuentra en Fahrenheit a Celsius. Y Luego imprime las 2 en pantalla
Azul Garcia
k2051
legajo 1374539
30/04/2015
*/




#include <stdio.h>


float calcularCelsius(int);


int main(void) {

const comienzo=0;

const fin=300;

const inc=20;


int farh;
float cels;

   for(farh=comienzo;farh<=fin;farh=farh+inc)
       
{cels=calcularCelsius(farh);

         printf("%3d %6.1f\n",farh,cels);

       }


return 0;

}



float calcularCelsius(int farhenheit){
   
float celsius=(5.0/9.0)*(farhenheit-32);

   return celsius;
}
