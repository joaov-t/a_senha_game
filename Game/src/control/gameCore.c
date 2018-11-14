#include <stdlib.h>
#include "../headers/interfaceControl.h"
#include "../headers/gameCore.h"
#include "../struct/gameData.h"
#include "../struct/gameMessages.h"

gameData *gameInstance;

void initializeGameData(){
    gameInstance = (gameData *)malloc(sizeof(gameData));
}

void gameProcedure(){
    interfacePrintMenu(MAIN_MENU_SIZE, MAIN_MENU);
}

void runGame(){
    initializeGameData();
    gameProcedure();
}
