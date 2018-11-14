#ifndef GAMEMESSAGES_H
#define GAMEMESSAGES_H

#define REPEATED_CHAR "Neste modo de jogo não são permitidas repetições! "
#define HAS_NAN_CHAR  "Senha inserida possui caracter não numérico! "
#define DIFFERENT_SIZE "Senha inserida possui tamanho diferente do escolhido no modo de jogo! "
#define INVALID_INPUT "Entrada Invalida! "
#define GREATER_THAN_MAX_RANGE "Você inseriu um digito maior que o máximo permitido para este nivel de dificuldade! "

#define MAIN_MENU_SIZE 3
static char *MAIN_MENU[] = {
    "Definir dificuldade",
    "Jogar",
    "Sair"
};

#define DIFFIC_MENU_SIZE 3
static char *DIFFIC_MENU[] = {
    "0 a 4, 3 caracteres, repete",
    "0 a 5, 4 caracteres, não repete",
    "0 a 9, 4 caracteres, não repete"
};

#endif