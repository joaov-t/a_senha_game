#ifndef GAMEMACROS_H
#define GAMEMACROS_H

#define HAS_NAN_CHAR  "Senha inserida possui caracter não numérico!\n"
#define DIFFERENT_SIZE "Senha inserida possui tamanho diferente do escolhido no modo de jogo!\n"
#define INVALID_INPUT "Entrada Invalida!\n"
#define GREATER_THAN_MAX_RANGE "Você inseriu um digito maior que o máximo permitido para este nivel de dificuldade!\n"
#define DIFFIC_DEFINED_TO "Dificuldade definida para: %d\n"
#define DIFFIC_NOT_DEFINED "Dificuldade do jogo não foi definida!\n"
#define CONGRAT_FOUND_CODE "Parabéns, você acertou a senha em %d tentativa(s)\n"
#define CODE_IS "A senha é: %s\n"
#define TEST_MODE "(MODO TESTE) Senha: %s\n"
#define GENERATED_CODE "Senha Gerada.\nInsira o palpite ou digite 'sair' para sair.\n"
#define GAME_EXIT_CODE "sair"
#define SELECT_DIFF "Selecione a dificuldade: "
#define INVALID_OPTION "Opção inválida!\n"
#define HELP_MESSAGE "Jogo a senha desenvolvido como TP de AEDS1 para o curso de Sistemas de Informação - Universidade Federal de Minas Gerais.\n Uso:\n ./game -h|--help ~ Exibe está mensagem\n ./game -d [1-4] ~ Inicia o jogo definindo do nível inicial.\n"

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