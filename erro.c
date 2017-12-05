#include <stdio.h>
#include <stdlib.h>

char erros[][50] =  {"Sem erro",
                     "Caracter invalido!",
                     "Formato de numero invalido!",
                     "Faltando fecha parenteses!",
                     "Operando invalido!"};

void Erro(int e) {

    printf("Erro: %s\n", erros[e]);
    exit(e);
}
