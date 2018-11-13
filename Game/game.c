#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "src/headers/codeGenerator.h"
#include "src/headers/attemptProcessor.h"

void main(){
    gameCode *myCode = getCode();
    myCode->maxRange = 3;
    myCode->length = 3;
    myCode->allowRepeat = 1;
    generateCode(myCode);

    processAttempt(*myCode, "1234");
    printf("\n");
    processAttempt(*myCode, "12");
    printf("\n");
    processAttempt(*myCode, "122");
    printf("\n");
    myCode->allowRepeat = 0;
    processAttempt(*myCode, "122");
    printf("\n");
    processAttempt(*myCode, "12A");
    printf("\n");
    processAttempt(*myCode, "123");
    printf("\n");
}