#include <stdlib.h>
#include <string.h>
#include "src/headers/ioControl.h"
#include "src/headers/codeGenerator.h"
#include "src/headers/attemptProcessor.h"

void main(){
    gameCode *myCode = getCode();
    myCode->maxRange = 3;
    myCode->length = 3;
    myCode->allowRepeat = 1;
    generateCode(myCode);

    /* Tests Input Cases */
    processAttempt(*myCode, "1234");
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