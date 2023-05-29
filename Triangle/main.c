#include <stdio.h>
#include "triangulo.h"
#include <locale.h>

int main() {

    setlocale(LC_ALL,"Portuguese_Brazil");

    int valor1, valor2, valor3;
    printf("Digite os três valores do triângulo:\n");
    scanf("%d %d %d", &valor1, &valor2, &valor3);

    if (triangulo(valor1, valor2, valor3)) {
        printf("O triângulo existe\n");

        if (equilatero(valor1, valor2, valor3)) {
            printf("O triângulo é Equilátero!\n");
        } else if (isosceles(valor1, valor2, valor3)) {
            printf("O triângulo é Isósceles!\n");
        } else if (escaleno(valor1, valor2, valor3)) {
            printf("O triângulo é Escaleno!\n");
        }
    } else {
        printf("O triângulo não existe\n");
    }
    return 0;
}