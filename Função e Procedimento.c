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

