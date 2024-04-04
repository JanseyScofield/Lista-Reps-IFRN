/* Crie um algoritmo leia um número do usuário e exiba a sua tabuada de multiplicação. */

#include <stdio.h>

main(){
	int c, num, res;
	
	c = 1;
	scanf("%d", &num);
	
	while(c<=10){
		res = num * c;
		printf("%d X %d = %d\n", num, c, res);
		c++;
	}
}
