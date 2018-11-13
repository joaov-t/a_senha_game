#include <stdlib.h>
#include <string.h>
#include "../headers/ioControl.h"
#include "../headers/attemptProcessor.h"

/**
 * Função responsável por verificar se 
 * possui na String um caracter ASCII que
 * não representa um digito entre 0 e 9.
 * 
 * @param {char *} str String a ser 
 *  verificada.
 * 
 * @return {int} Retorna 1 se possui um
 *  caracter não numerico e 0 se não.
*/
int hasNaNChar(char *str){
    int hasNaN = 0;

    for(int i = 0; i<strlen(str); i++){
        if(str[i]<'0' || str[i]>'9'){
            hasNaN = 1;
        }
    }
    
    return hasNaN;
}


/**
 * Função responsável por verificar se 
 * possui na String dois caracteres ASCII 
 * repetidos.
 * 
 * @param {char *} str String a ser 
 *  verificada.
 * 
 * @return {int} Retorna 1 se possui um
 *  caracter repetido e 0 se não.
*/
int hasRepeatedChar(char *str){
    int hasRepeated = 0;

    for (int i = 0; i < strlen(str); i++) { 
        for (int j = i + 1; j < strlen(str); j++) { 
            if (str[i] == str[j]) { 
                hasRepeated = 1; 
            } 
        } 
    } 

    return hasRepeated;
}

/**
 * Verifica se a entrada é válida de acordo
 * com os parametros da senha gerada.
 * Retorna:
 *  0 - Válido.
 *  1 - Senha de tamanho diferente.
 *  2 - Caracter não numérico.
 *  3 - Caracter repetindo.
 * 
 * @param {char} *input String correspondente
 *  a entrada do usuário.
 * @param {gameCode} gCode Senha gerada pelo
 *  sistema.
 * 
 * @return {int} Còdigo de validade do 
 *  parametro testado.
*/
int checkValidInput(char *input, gameCode gCode){
    int validFlag = 0;

    if(strlen(input)!=gCode.length){
        validFlag = 1;
    } else if(hasNaNChar(input)){
        validFlag = 2;
    } else if(!gCode.allowRepeat && hasRepeatedChar(input)){
        validFlag = 3;
    }

    return validFlag;
}


/**
 * Função responsável por processar o input
 * válido do usuário e imprimir as informações
 * sobre sua tentativa.
 * 
 * @param {char} *generatedCode String correspondente
 *  à senha gerada pelo jogo.
 * @param {char} *inputedCode String correspondente
 *  à senha inserida pelo jogador.
*/
void processInputedCode(char *generatedCode, char *inputedCode){
    //ToDo
}

/**
 * Função responsável por verificar
 * se a tentativa inserida pelo usuário é
 * válida. Após a verificação, imprime
 * a mensagem correspondente.
 * 
 * @param {gameCode *} gCode Referencia à uma
 *  senha gerada pelo jogo.
 * @param {char *} playerInput Entrada do jogador
 *  no jogo.
*/
void processAttempt(gameCode gCode, char *playerInput){
    checkValidInput(playerInput, gCode);
    processInputedCode(gCode.codeValue, playerInput);
}