#include <stdio.h>
#include "triangulo.h"
#include <locale.h>

int main() {

    setlocale(LC_ALL,"Portuguese_Brazil");

    int valor1, valor2, valor3;
    printf("Digite os tr�s valores do tri�ngulo:\n");
    scanf("%d %d %d", &valor1, &valor2, &valor3);

    if (triangulo(valor1, valor2, valor3)) {
        printf("O tri�ngulo existe\n");

        if (equilatero(valor1, valor2, valor3)) {
            printf("O tri�ngulo � Equil�tero!\n");
        } else if (isosceles(valor1, valor2, valor3)) {
            printf("O tri�ngulo � Is�sceles!\n");
        } else if (escaleno(valor1, valor2, valor3)) {
            printf("O tri�ngulo � Escaleno!\n");
        }
    } else {
        printf("O tri�ngulo n�o existe\n");
    }
    return 0;
}