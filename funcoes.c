#include <stdio.h>
#include <stdbool.h>

void multiplicacao(int num1, int num2){
    int result = 0;
    result = num1 * num2;
    printf("%d x %d = %d", num1, num2, result);
}

int soma(int num1, int num2){
    return num1 + num2;
}

double divisao(int num1, int num2){
    double result = 0;
    printf("%d / %d = ", num1, num2);
    result = (double) num1 / num2;

    return result;
}

int subtracao(int num1, int num2){
    printf("%d - %d = ", num1, num2);
    return num1 - num2;
}

void showMenu(bool shouldClearScreen){

    if (shouldClearScreen){
       printf("\n");
       system("pause");
       system("cls");
    }
    printf("Selecione uma opcao: \n");
    printf("Opcao 1: Soma \n");
    printf("Opcao 2: Subtracao \n");
    printf("Opcao 3: Multiplicacao \n");
    printf("Opcao 4: Divisao \n");
    printf("Opcao 0: Parar o programa\n");
}

void createMenu(int option){
    while (option != 0){
       int numero1, numero2;
       if ((option <= 4)&&(option > 0)){
          printf("Digite dois numeros: \n");
          scanf("%d", &numero1);
          scanf("%d", &numero2);
       }

       switch (option){
          case 1:
            printf("%d + %d = %d\n", numero1, numero2, soma(numero1, numero2));
            break;
          case 2:
            printf("%d\n", subtracao(numero1,numero2));
            break;
          case 3:
            multiplicacao(numero1, numero2);
            break;
          case 4:
            printf("%.1lf\n", divisao(numero1, numero2));
            break;
          default:
            printf("Operacao invalida!\n");
       }
       showMenu(true);
       printf("Digite outra opcao: ");
       scanf("%d", &option);
    }
}

