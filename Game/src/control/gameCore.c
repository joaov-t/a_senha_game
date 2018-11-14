#include <stdlib.h>
#include "../headers/interfaceControl.h"
#include "../headers/attemptProcessor.h"
#include "../headers/codeGenerator.h"
#include "../headers/gameCore.h"
#include "../struct/gameData.h"
#include "../struct/gameMessages.h"

gameData *gameInstance;

void initializeGameData(){
    gameInstance = (gameData *)malloc(sizeof(gameData));
}

void gameProcedure(){
    interfacePrintMenu(MAIN_MENU_SIZE, MAIN_MENU);
    gameCode *myCode = getCode();

    myCode->allowRepeat = 0;
    myCode->maxRange = 4;
    myCode->length = 4;
    
    int *attemptResult;
    char input[myCode->length];
    
    interfaceScan("%s", input);
    attemptResult = processAttempt(*myCode, input);
}

void runGame(){
    initializeGameData();
    gameProcedure();
}
