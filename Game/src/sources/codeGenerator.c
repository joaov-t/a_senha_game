#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "../headers/codeGenerator.h"

/**
 * Função responsável por retornar uma estrutura
 * de código, alocada dinamicamente.
 * 
 * @return {gameCode} Estrutura gameCode.
*/
gameCode *getCode(){
    gameCode *newCode = malloc(sizeof(gameCode));
    return newCode;
}

void generateCode(gameCode *code){
    //ToDo
}