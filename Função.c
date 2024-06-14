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

