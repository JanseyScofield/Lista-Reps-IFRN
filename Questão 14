/*Faça um algoritmo que leia 20 números e, ao final, escreva quantos estão entre 0 e 100, quantos estão entre 101 e 200 e quantos são maiores de 200. */

#include <stdio.h>

main(){
	int c, num;
	int entre0e100, entre101e200, maiorQ200;
	
	c  = 1;
	entre0e100 = 0;
	entre101e200 = 0;
	maiorQ200 = 0;
	
	while(c<=20){
		scanf("%d", &num);
		if(num >0 && num <100){
			entre0e100++;
		}
		if(num>101 && num <200){
			entre101e200++;
		}
		if(num>200){
			maiorQ200++;
		}
		c++;
	}
	printf("%d, %d, %d.",entre0e100, entre101e200, maiorQ200);
}
