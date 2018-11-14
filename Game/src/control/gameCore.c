#include <stdlib.h>
#include <string.h>
#include "../headers/interfaceControl.h"
#include "../headers/attemptProcessor.h"
#include "../headers/codeGenerator.h"
#include "../headers/gameCore.h"
#include "../struct/gameData.h"
#include "../struct/gameMacros.h"

gameData *gameInstance;

/**
 * Função responsável por inicializar
 * os dados do jogo corrente.
*/
void initializeGameData(){
    gameInstance = (gameData *)malloc(sizeof(gameData));
    gameInstance->difficulty = 0;
}

/**
 * Função responsável por imprimir o 
 * menu principal e ler a opção
 * escolhida pelo jogador.
 * 
 * @return {int} Opção escolhida pelo
 *  jogador.
*/
int mainMenu(){
    int opt=0;

    do{
        interfacePrintMenu(MAIN_MENU_SIZE, MAIN_MENU);
        interfaceScan("%d", &opt);
    } while(opt<0 || opt>3);

    return opt;
}

/**
 * Função responsável por imprimir o 
 * menu principal e alterar a dificuldade
 * de acordo com a opção escolhida pelo
 * jogador.
*/
void changeDifficult(){
    int opt=0;

    do{
        interfacePrintMenu(DIFFIC_MENU_SIZE, DIFFIC_MENU);
        interfaceScan("%d", &opt);
    } while(opt<1 || opt>3);

    gameInstance->difficulty = opt;
    interfacePrint(DIFFIC_DEFINED_TO, opt);
}

/**
 * Função responsável por relizar o fluxo principal
 * de checar a tentativa do usuário e imprimir as
 * respostas.
*/
void gameProcedure(){
    if(!gameInstance->difficulty){
        interfacePrint(DIFFIC_NOT_DEFINED);
    }
}

/**
 * função responsável por realizar o fluxo
 * do jogo, de selecionar os menus e 
 * definir propriedades do jogo.
*/
void runGame(){
    initializeGameData();

    int menuOpt = 0;
    do{
        menuOpt = mainMenu();
        switch(menuOpt){
            case 1:
                changeDifficult();
                break;
            case 2:
                gameProcedure();
                break;
        }
    } while(menuOpt!=3);
}
