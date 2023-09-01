#include <stdio.h>
#include <string.h> //inclusão das bibilhotecas
#include <stdlib.h>

    typedef struct dados{ //criando a struct banda e renomeando para banda
        char nome[100];
        char estilo_musical[100]; //dados
        int numero_de_integrantes;
        int posicao;
}dados;

int main(){
    dados banda[5]; //inserção das variaveis contadoras
    int i, n=1;
    int menor, min=0, pos;

    for(i=0; i<5; i++){
        printf("Digite o nome da %d banda: ", n); //nome da banda
        setbuf(stdin, NULL);
        fgets(banda[i].nome, 100, stdin);

        printf("Digite o estilo musical da %d banda: ", n); //estilo musical
        setbuf(stdin, NULL);
        fgets(banda[i].estilo_musical, 100, stdin);

        printf("Digite o numero de integrantes da %d banda: ", n); //numero de integrantes
        scanf("%d", &banda[i].numero_de_integrantes);

        printf("Digite a posicao de preferencia: "); //posição de preferencia
        scanf("%d", &banda[i].posicao);
        
        menor=banda[i].posicao;
        if(menor>min){ //conição para a primeira posição
            min=menor;
            pos=i;
        }
        n++;

    }

    printf("\nA banda preferida foi %s ", banda[pos].nome);
    printf("\nO estilo musical dessa banda eh %s ", banda[pos].estilo_musical);
    printf("\nEssa banda tem %d numero de integreantes", banda[pos].numero_de_integrantes);



    return 0;
}