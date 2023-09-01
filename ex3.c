#include <stdio.h>
#include <string.h> //inclusão das bibilhotecas
#include <stdlib.h>
#include <time.h> 

typedef struct dados {
    int nipe;
    int numero;
} dados;

int main(){
    srand(time(NULL)); // Inicialize o gerador de números aleatórios

    dados carta[5];
    int i, n=1;

    for(i=0; i<5; i++){
        // Gere números aleatórios usando rand()
        carta[i].nipe = (rand() % 4) + 1;
        carta[i].numero = (rand() % 10) + 1;

        printf("\n%d carta", n);
        printf("\n%d\n", carta[i].numero);
        if(carta[i].nipe == 1){
            printf(" Ouros");
        } else if(carta[i].nipe == 2){
            printf(" Espada");
        } else if(carta[i].nipe == 3){
            printf(" Paus");
        } else {
            printf(" Copas");
        }
        n++;
    }
 
    return 0;
}
