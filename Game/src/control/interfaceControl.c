#include <stdlib.h>
#include <ncurses.h>
#include "../struct/gameMacros.h"
#include "../headers/interfaceControl.h"

/**
 * Função responsável por imprimir o menu
 * recebendo como parametro macros e 
 * constantes definidas em gameMessages.h
 * 
 * @param {int} menuLength Tamanho do menu
 *  a ser impresso.
 * @param {char **} menuArray Array de strings
 *  contendo os itens do menu.
*/
void interfacePrintMenu(int menuLength, char **menuArray){
    for(int i=0; i<menuLength; i++){
        interfacePrint("%d - ", i+1);
        interfacePrint(menuArray[i]);
        interfacePrint("\n");
    }
}

/**
 * Função responsável por imprimir os
 * dados na tela de forma correta.
 * 
 * @param {char *} input Input a ser
 *  impresso.
 * @param {...} Lista de argumentos
 *  a serem impressos.
*/
void interfacePrint(const char * input, ...){
    va_list args;
    va_start (args, input);
    vprintf (input, args);
    va_end (args);
}


/**
 * Função responsável por ler os
 * dados de entrada de forma correta.
 * 
 * @param {char *} format Formato do
 * input a ser lido.
 * @param {...} Lista de argumentos
 *  a serem lidos.
*/
void interfaceScan(const char * format, ...){
    va_list args;
    va_start (args, format);
    vscanf(format, args);
    getchar();
    va_end (args);
}