#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "src/headers/codeGenerator.h"

void main(){
    gameCode *myCode = getCode();
    myCode->maxRange = 3;
    myCode->length = 3;
    myCode->allowRepeat = 1;
    
    myCode->codeValue = "TES";
    printf("%s\n", myCode->codeValue);
    
    generateCode(myCode);
    printf("%s\n", myCode->codeValue);
    
    myCode->maxRange = 4;
    myCode->length = 4;    
    
    generateCode(myCode);
    printf("%s\n", myCode->codeValue);
    
    myCode->allowRepeat = 0;
    generateCode(myCode);
    printf("%s\n", myCode->codeValue);
}