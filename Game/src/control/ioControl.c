/**
 *  Esta classe serve para controle de entrada e saída de dados.
 *  As funções de entrada e saída padrões foram criadas
 * com base na biblioteca 'stdio.h'.
 *  Pode ser alterada para inclusão de quaisquer funções
 * de entrada e saída.
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "../headers/ioControl.h"

void ioPrint(const char * input, ...){
    va_list args;
    va_start (args, input);
    vprintf (input, args);
    va_end (args);
}