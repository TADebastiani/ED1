/**
  * Entrada Indefinida de Inteiros.
  * Autor: Tiago A. Debastiani
  * Data: 10/03/16
 **/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int *inteiros = (int *) malloc(sizeof(int)*5);
	int j, count=0;

	while(scanf("%d",inteiros+count)) {
		count++;
		if (count%5 == 0) {
			inteiros = (int *) realloc(inteiros,sizeof(int)*(5+count));
		}
	}
	
	printf("\n%d Inteiros recebidos e armazenados\nEndereço:\t\tInteiro:\n",count);
	for (int i=0; i<count; i++){
		printf("%d\t\t%d\n", inteiros+i, *(inteiros+i));
	}
}