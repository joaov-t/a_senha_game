#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "src/headers/ioControl.h"
#include "src/headers/codeGenerator.h"
#include "src/headers/attemptProcessor.h"

void main(){
    gameCode *myCode = getCode();

    myCode->maxRange = 4;
    myCode->length = 4;
    myCode->allowRepeat = 1;
    myCode->codeValue = "1434";

    char input[myCode->length];
    int *attemptResult;

    /* Tests Input Cases */
    ioScan("%s", input);
    attemptResult = processAttempt(*myCode, input);
    if(attemptResult != NULL){
        ioPrint(" |%d %d| \n", attemptResult[0], attemptResult[1]);
    } else {
        ioPrint("vrau");
    }
    ioPrint("\n");
    /* End of Test */
}