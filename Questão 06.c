/*Leia a idade de 20 pessoas e exiba a soma das idades.*/

#include <stdio.h>

main(){
	int c, idade, res;
		
	c = 1;
	res = 0;
	
	while(c<=20){
		scanf("%d", &idade);
		res +=  idade;
		c++;
	}
	printf("%d", res);
}
