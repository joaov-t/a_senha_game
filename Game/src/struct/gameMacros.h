#ifndef GAMEMACROS_H
#define GAMEMACROS_H

#define HAS_NAN_CHAR  "Senha inserida possui caracter não numérico!\n"
#define DIFFERENT_SIZE "Senha inserida possui tamanho diferente do escolhido no modo de jogo!\n"
#define INVALID_INPUT "Entrada Invalida!\n"
#define GREATER_THAN_MAX_RANGE "Você inseriu um digito maior que o máximo permitido para este nivel de dificuldade!\n"
#define DIFFIC_DEFINED_TO "Dificuldade definida para: %d\n"
#define DIFFIC_NOT_DEFINED "Dificuldade do jogo não foi definida!\n"

#define MAIN_MENU_SIZE 3
static char *MAIN_MENU[] = {
    "Definir dificuldade",
    "Jogar",
    "Sair"
};

#define DIFFIC_MENU_SIZE 4
static char *DIFFIC_MENU[] = {
    "Facil - 0 a 4, 3 caracteres, repete",
    "Medio - 0 a 5, 4 caracteres, não repete",
    "Dificil - 0 a 9, 4 caracteres, não repete",
    "Teste - 0 a 9, 4 caracteres, não repete, imprime a senha"
};

#endif