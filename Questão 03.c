/*Leia o nome do usuário e escreva o nome dele na tela 10 vezes.*/

#include <stdio.h>

main(){
	char nome[20];
	int c;
	
	scanf("%s",nome);
	c = 1;
	while(c<=10){
		printf("%s\n ", nome);
		c++;
	}
}
