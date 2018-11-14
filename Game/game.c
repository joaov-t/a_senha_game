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

    /* Tests Input Cases */
    scanf("%s", input);
    processAttempt(*myCode, input);
    ioPrint("\n");
    processAttempt(*myCode, "12");
    ioPrint("\n");
    processAttempt(*myCode, "122");
    ioPrint("\n");
    myCode->allowRepeat = 0;
    processAttempt(*myCode, "122");
    ioPrint("\n");
    processAttempt(*myCode, "12A");
    ioPrint("\n");
    processAttempt(*myCode, "123");
    ioPrint("\n");
    /* End of Test */
}