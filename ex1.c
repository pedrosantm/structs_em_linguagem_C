#include <stdio.h>
#include <string.h> //inclusão das bibilhotecas
#include <stdlib.h>

    typedef struct banda{ //criando a struct banda e renomeando para banda
        char nome[100];
        char estilo_musical[100]; //dados
        int numero_de_integrantes;
        int posicao;
}banda;
