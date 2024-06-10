// https://www.youtube.com/watch?v=sFuv6m-_JrM

// Faça um algoritmo que contenha um vetor de inteiro de 4 posições. Leia 4 valores e posteriormente calcule a média e a soma dos valores.

#include <stdio.h>

int main() {
    int vetor_n[4];
    int i, s = 0;
    float m;

    for(i = 0; i < 4; i++) {
        printf("Digite um valor para a posicao %d : ", i);
        scanf("%d", &vetor_n[i]);
    }

    for(i = 0; i < 4; i++) {
        s = s + vetor_n[i];
    }

    m = (float)s / 4; // A expressão m = (float)s / 4; é necessária para garantir que a divisão seja tratada como uma divisão de ponto flutuante,
                      // em vez de uma divisão de inteiros.Em C, quando você divide dois inteiros, o resultado será truncado para o inteiro mais próximo.
                      //Por exemplo, se s for 9 e você fizer s / 4, o resultado seria 2, porque a parte decimal seria truncada.
                      //Isso ocorre porque ambos os operandos são inteiros, então a divisão é inteira.

    printf("\n");

    for(i = 0; i < 4; i++) {
        printf("O valor da posicao %d eh : %d\n", i, vetor_n[i]);
    }

    printf("\nA soma dos valores eh: %d\n", s);
    printf("A media dos valores eh: %.1f\n", m);

    return 0;
}

// Faça um algoritmo que tenha dois vetores, A e B, de 4 posições. Leia os valores para o vetor A, posteriormente inclua os valores de A de forma inversa em B.
// Por fim, imprima os dois vetores.

#include<stdio.h>

main(){
	int vetor_a[4], vetor_b[4];
	int ia, ib = 3;
	
	for(ia = 0; ia < 4; ia++){
		printf("Digite um valor para a posicao %d :", ia);
		scanf("%d", &vetor_a[ia]);
	}
	
	for(ia = 0; ia < 4; ia++){
		vetor_b[ib] = vetor_a[ia];
		ib--;
	}
	
	for(ia = 0; ia < 4; ia++){
		printf("A[%d] = %d  B[%d] = %d\n", ia, vetor_a[ia], ia, vetor_b[ia]);
	}
	
	return 0;
}

// https://www.youtube.com/watch?v=oSJdSCHpPcc

#include <stdio.h>

main(){
	int A[10], B[10];
	int i;
	
	for(i = 0; i < 10; i++){
		printf("Digite o valor da posicao %d : ", i);
		scanf("%d", &A[i]);
 	}
 	
 	printf("\nSaida - Vetor A\n");
 	
	for(i = 0; i < 10; i++){
		printf("A[%d] = %d\n", i, A[i]);
	}
	
	printf("\nSaida - Vetor B\n");
	for(i = 0; i < 10; i++){
		B[i] = A[i] * 10;
		printf("B[%d] = %d\n", i, B[i]);
	}
	
	return 0;
}
