/**
* Alocação Dinamica de Matriz.
* Autor: Tiago A. Debastiani
* Data: 03/03/16
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int coluna, linhas = 5;
	int **matriz = malloc(linhas * sizeof(int *));
	for (int i=0; i<linhas; i++){
 		coluna = rand()%10;
 		matriz[i]=malloc(coluna * sizeof(int));
		for (int j=1; j<coluna; j++){
			matriz[i][j] = rand()%1000;

			if (j==1){
				printf("%d", matriz[i][j]);
			}else{
				printf(", %d", matriz[i][j]);
			}
		}
		printf("\n");
	}
}