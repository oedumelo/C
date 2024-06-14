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
