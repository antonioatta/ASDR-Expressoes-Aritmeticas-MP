#include <stdio.h>
#include <stdlib.h>
#include "analex.h"
#include "anasint.h"


int main()
{


    printf("Digite expressoes aritmeticas no formato padrao (modo infixo).\n");
    printf("Termine cada expressao com o sinal de igualdade (=) seguido de <enter>.\n");
    printf("Parenteses podem ser usados para quebrar a ordem de precedencia dos \n");
    printf("operadores (+, -, *, e /). Ao final de cada expressao, se ela estiver correta,\n");
    printf("uma mensagem com essa indicacao sera emitida e, em seguida, uma nova \n");
    printf("expressao pode ser digitada.\n");
    printf("Termine a entrada de expressoes com um sinal de igualdade (=) sem expressao.\n");
    printf("Ocorrencias de caracteres apos o sinal de igualdade (=) serao desprezadas.\n");
    printf("\nExpr> ");
    Analex(stdin);
    while (t.cat != SN || t.cod != IGUAL) {
        Expr();
        if (t.cat==SN && t.cod==IGUAL)
            printf("Codigo da MP gerado OK!\n");
        else
            Erro(1);
        printf("\nExpr> ");
        fflush(stdin);
        Analex(stdin);
    }
    printf("Ate a proxima!");
    return 0;
}
