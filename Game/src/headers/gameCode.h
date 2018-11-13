#ifndef GAMECODE_H
#define GAMECODE_H

/**
 * Estrutura gameCode contendo
 * tamanho da senha, limite máximo,
 * se permite repetições e o valor
 * gerado pela função generateCode.
*/
typedef struct gameCode{
    int length;
    int maxRange;
    int allowRepeat;
    char *codeValue;
} gameCode;

#endif /*GAMECODE_H*/