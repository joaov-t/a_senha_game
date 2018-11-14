#include <stdlib.h>
#include <string.h>
#include "src/headers/interfaceControl.h"
#include "src/struct/gameMessages.h"

void main(){
    interfacePrintMenu(MAIN_MENU_SIZE, MAIN_MENU);
    interfacePrintMenu(DIFFIC_MENU_SIZE, DIFFIC_MENU);
}