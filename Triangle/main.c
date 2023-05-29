#include <stdio.h>
#include "triangulo.h"


int main() {
    int lado1, lado2, lado3;
    printf("Digite os valores dos lados do triangulo:\n");
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    if (Triangulo(lado1, lado2, lado3)) {
        printf("Triangulo existe.\n");

        if (Equilatero(lado1, lado2, lado3)) {
            printf("Triangulo equilatero.\n");
        } else if (Isosceles(lado1, lado2, lado3)) {
            printf("Triangulo isosceles.\n");
        } else if (Escaleno(lado1, lado2, lado3)) {
            printf("Triangulo escaleno.\n");
        }
    } else {
        printf("Triangulo nao existe.\n");
    }

    return 0;
}
