/**
  * Entrada Indefinida de Inteiros.
  * Autor: Tiago A. Debastiani
  * Data: 10/03/16
 **/

#include <stdio.h>
#include <stdlib.h>

int *uniao(int *v1, int n1, int *v2, int n2){
	int *v3 = (int *) malloc(sizeof(int) * (n1+n2));
	int n3=0;

	for (int i=0; i<n1; i++){
		*(v3+n3) = *(v1+i);
		n3++;
	}
	for (int i=0; i<n2; i++){
		*(v3+n3) = *(v2+i);
		n3++;
	}

	return v3;
}

void main(){
	int *v1 = (int *) malloc(sizeof(int)),
		*v2 = (int *) malloc(sizeof(int)),
		*v3,
		n1=0, n2=0, n3;
	char lixo[10];

	printf("Digite o primeiro vetor:\n");
	while(scanf("%d",v1+n1)){
		n1++;
		v1 = (int *) realloc(v1,sizeof(int)*(n1+1));
	}
	scanf("%s",&lixo);
	printf("Digite o segundo vetor:\n");
	while(scanf("%d",v2+n2)){
		n2++;
		v2 = (int *) realloc(v2,sizeof(int)*(n2+1));
	}

	printf("\nPrimeiro Vetor:\n");
	for(int i=0; i<n1; i++){
		printf("%d\t\t%d\n", v1+i, *(v1+i));
	}

	printf("\nSegundo Vetor:\n");
	for(int i=0; i<n2; i++){
		printf("%d\t\t%d\n", v2+i, *(v2+i));
	}

	v3 = uniao(v1,n1,v2,n2);
	n3 = (n1+n2);
	printf("\nUniao:\n");
	for(int i=0; i<n3; i++){
		printf("%d\t\t%d\n", v3+i, *(v3+i));
	}
	free(v1);
	free(v2);
	free(v3);
}