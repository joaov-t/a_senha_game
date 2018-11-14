#include <stdlib.h>
#include <ncurses.h>
#include "../struct/gameMessages.h"
#include "../headers/interfaceControl.h"

void interfacePrintMenu(int menuLength, char **menuArray){
    for(int i=0; i<menuLength; i++){
        interfacePrint("%d - ", i+1);
        interfacePrint(menuArray[i]);
        interfacePrint("\n");
    }
}

void interfacePrint(const char * input, ...){
    va_list args;
    va_start (args, input);
    vprintf (input, args);
    va_end (args);
}

void interfaceScan(const char * format, ...){
    va_list args;
    va_start (args, format);
    vscanf(format, args);
    va_end (args);
}