#include <stdio.h>
#include <stdlib.h>

int i;
int j;
int total = 0;
int vetorA[7][7];


void main(){
    for(i = 0; i < 7; i++){
        for(j =0; j < 7; j++){
                printf("Digite um valor: ");
                scanf("%d", &vetorA[i][j]);
                if(vetorA[i][j] % 2 == 0){
                    total = total + 1;
                }
        }
    }
    printf("O total de pares e de: %d", total);
}
