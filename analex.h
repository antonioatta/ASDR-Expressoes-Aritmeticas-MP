#ifndef ANALEX
#define ANALEX

#include <stdio.h>

typedef
enum {OP=1, SN}
TCAT;

typedef
enum {SOMA=1, SUBT, MULT, DIVI, ABRE_P, FECHA_P, IGUAL, NOOP}
TCOD;

typedef
struct {
    TCAT cat;
    union {
       TCOD cod;
       float valor;
    };
} TOKEN;

/* Variaveis globais  */
TOKEN t;
char digitos[15];
int indDig;

/* Assinaturas de funcoes  */
void Erro(int);
void Analex(FILE *);

#endif // ANALEX
