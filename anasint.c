#include <stdlib.h>
#include "analex.h"
#include "anasint.h"

void Expr() {   // EXPR

    Termo();
    Resto();
}
void Termo() {

    Fator();
    Sobra();
}
void Resto() {   // RESTO

    if ((t.cat==SN && t.cod==SOMA) || (t.cat==SN && t.cod==SUBT))  {
        int sinal = t.cod;
        Analex(stdin);
        Termo();
        printf("%s\n", ((sinal==SOMA) ? "ADD" : "SUB"));
        Resto();
    }
    else ;       // saida por vazio
}
void Sobra() {   // SOBRA

    if ((t.cat==SN && t.cod==MULT) || (t.cat==SN && t.cod==DIVI))  {
        int sinal = t.cod;
        Analex(stdin);
        Fator();
        printf("%s\n", ((sinal==MULT) ? "MUL" : "DIV"));
        Sobra();
    }
    else ;      // saida por vazio
}
void Fator() {  // FATOR

    if (t.cat==SN && t.cod==ABRE_P) {
        Analex(stdin);
        Expr();
        if (t.cat!=SN || t.cod!=FECHA_P) {
            Erro(3);
        }
        Analex(stdin);
    }
    else if (t.cat==OP) {
        printf("PUSH %d\n", (int)t.valor);
        Analex(stdin);
    }
    else Erro(4);
}
