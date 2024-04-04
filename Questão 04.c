/*Leia o nome um número do usuário um número N e escreva o nome dele na tela N vezes.*/

#include <stdio.h>

main(){
	int c, qtdV;
	char nome[50];
	
	scanf("%s", nome);
	scanf("%d", &qtdV);
	c = 1;
	
	while(c<=qtdV){
		printf("%s\n", nome);
		c++;
	}
}
