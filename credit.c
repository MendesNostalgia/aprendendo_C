#include <stdio.h>

int main () {
    char nome [10];
    printf ("Qual o seu nome?\n");
    scanf ("%s", nome);
    printf ("Olá, %s! Seja bem-vindo ao nosso jogo.\n", nome);
}