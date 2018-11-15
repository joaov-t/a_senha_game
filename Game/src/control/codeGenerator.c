#include <stdlib.h>
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

/**
 * Função responsável por gerar o código em 
 * uma estrutura gameCode. Utiliza o caracter
 * '@' como senha padrão para facilitar a
 * implementação do jogo.
 * 
 * @param {gameCode} *code Ponteiro para 
 *  Estrutura gameCode.
*/
void generateCode(gameCode *code){
    int i=0;
    char *gCode = malloc(code->length);
    
    for(int i=0; i<code->length; i++){
        gCode[i] = '@';
    }
    
    srand(time(0));
    
    while(i<code->length){
        char gChar = (int)(rand()%(code->maxRange+1))+'0';
        
        if(code->allowRepeat || !strchr(gCode, gChar)){
            gCode[i] = gChar;
            i++;
        }
    }
    
    code->codeValue = gCode;
}