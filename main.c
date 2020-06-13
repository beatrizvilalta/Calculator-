#include <stdio.h>
#include <stdbool.h>

void multiplicacao(int num1, int num2);
int soma(int num1, int num2);
double divisao(int num1, int num2);
int subtracao(int num1, int num2);
void showMenu(bool shouldClearScreen);
void createMenu(int option);

int main()
{
    int opcao;

    showMenu(false);
    scanf("%d", &opcao);
    createMenu(opcao);

    return 0;
}

