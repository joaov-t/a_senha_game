#include <stdlib.h>
#include <string.h>
#include "src/headers/gameCore.h"
#include "src/headers/interfaceControl.h"
#include "src/struct/gameMacros.h"

void main(int argc, char const *argv[]){
    int diffcultParam = 0;

    if(argv[1]!=NULL){
        if(!strcmp(argv[1],(char*)"-h") || !strcmp(argv[1],(char*)"--help")){
            interfacePrint(HELP_MESSAGE);
        } else if(!strcmp(argv[1],(char*)"-d")){
            diffcultParam = (int)(*argv[2]-'0');
            runGame(diffcultParam);
        } else {
            interfacePrint(INVALID_OPTION);
        }
    } else {
        runGame(diffcultParam);
    }
    
    
}