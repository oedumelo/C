// Calculadora de adição usando função.

#include <stdio.h>

int soma(int x, int y){
	int s;
	s = x + y;
	
	return s;
}

int main(){
	int n1, n2, resultado;
	
	printf("Digite um numero: ");
	scanf("%d", &n1);
	printf("Digite outro numero: ");
	scanf("%d", &n2);
	
	resultado = soma(n1, n2);
	
	printf("O resultado eh: %d", resultado);
	
	return 0;
}

//https://professor.luzerna.ifc.edu.br/marcelo-cendron/wp-content/uploads/sites/40/2017/02/Exerc%C3%ADcios-Fun%C3%A7%C3%B5es-Resolvido.pdf
// 1. Escreva uma função que receba dois números inteiros retorne o menor número.

#include <stdio.h>

int menor(int x, int y){
	if(x < y){
		return x;
	}
	else{
		return y;
	}
}

int main(){
	int n1, n2, m;
	
	printf("Digite um numero: ");
	scanf("%d", &n1);
	
	printf("Digite outro numero: ");
	scanf("%d", &n2);
	
	m = menor(n1, n2);
	
	printf("\nO menor numero eh: %d", m);
	
	return 0;
}

//https://docente.ifrn.edu.br/robinsonalves/disciplinas/programacao-estruturada-e-orientada-a-objetos/lista%20funcoes.pdf
// 1. Escreva uma função que receba como parâmetro um número inteiro e retorne -1, 0 ou 1 se este número for negativo, nulo ou positivo, respectivamente.

#include <stdio.h>

int numero(int x){
	if(x == 0){
		return 0;
	}
	else if(x > 0){
		return 1;
	}
	else{
		return -1;
	}
}

int main(){
	int n;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	int resultado = numero(n);
	
	if(n == 0){
		printf("\nO numero digitado eh nulo.");
	}
	
	else if(n > 0){
		printf("\nO numero digitado eh positivo.");
	}
	
	else{
		printf("\nO numero digitado eh negativo.");
	}
	
	return 0;
}

// 2. Escreva uma função que receba como parâmetro dois números inteiros e retorne -1 se o primeiro for menor que o segundo número, 0 se forem iguais ou 1 se o primeiro for maior que o segundo número.

#include <stdio.h>

int numero(int x, int y){
	if(x < y){
		return -1;
	}
	
	else if(x == y){
		return 0;
	}
	
	else{
		return 1;
	}
}

int main(){
	int n1, n2;
	
	printf("Digite um numero: ");
	scanf("%d", &n1);
	
	printf("Digite outro numero: ");
	scanf("%d", &n2);
	
	int resultado = numero(n1, n2);
	
	if(resultado == -1){
		printf("\n%d eh menor que %d", n1, n2);
	}
	
	else if(resultado == 0){
		printf("\n%d eh igual a %d", n1, n2);
	}
	
	else{
		printf("\n%d eh maior que %d", n1, n2);
	}
	
	return 0;
}
