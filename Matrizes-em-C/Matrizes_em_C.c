#include<stdio.h>
#define LIN 3
#define COL 3
int main(){
    int matriz[LIN][COL];
    int soma = 0;
    for(int i = 0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
            printf("Digite o elemento [%d][%d] :", i , j);
            scanf("%d", &matriz[i][j]);
            soma  += matriz[i][j];
        }
    }
    printf("Soma de todos os elementos: %d\n", soma);
return 0;
}
