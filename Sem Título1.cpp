
/* 2) Escreva um programa que recebe a idade de um jogador de futebol e mostra
		na tela sua categoria de acordo com:

- categorias pré-júnior (7 a 16 anos);
- júnior (17 a 20 anos);
- profissional (21 a 45 anos);
- senior (maior que 46 anos). */



#include <stdio.h>

int main(){
	
	int idade;
	
	printf("Digite a idade do jogador\n");
	scanf("%d",&idade);
	
	if(idade >= 7 && idade <= 16){
		printf("Pre-junior\n");
	}else if(idade >= 17 && idade <= 20){
		printf("Junior\n");
	}else if(idade >= 21 && idade <= 45){
		printf("Profissional\n");
	}else if(idade >= 46){
		printf("Senior\n");
	}else{
		printf("Idade fora dos intervalos\n");
	}
	
	return 0;
}
