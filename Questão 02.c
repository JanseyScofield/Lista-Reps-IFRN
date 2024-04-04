/*Escreva um algoritmo que calcule a soma dos números de 1 a 15.*/

#include <stdio.h>

main(){
	int c, resultado;
	
	c = 1;
	resultado = 0;
	
	while(c<=15){
		resultado += c;
		c++;
	}
	printf("%d", resultado);
}
