
int triangulo(int valor1, int valor2, int valor3);
int equilatero(int valor1, int valor2, int valor3);
int isosceles(int valor1, int valor2, int valor3);
int escaleno(int valor1, int valor2, int valor3);

int triangulo(int valor1, int valor2, int valor3) {
    if (valor1 + valor2 > valor3 && valor2 + valor3 > valor1 && valor3 + valor1 > valor2) {
    } else {
        return 0;
    }
}

int equilatero(int valor1, int valor2, int valor3) {
    if (valor1 == valor2 && valor2 == valor3) {
        return 1;
    } else {
        return 0;
    }
}

int isosceles(int valor1, int valor2, int valor3) {
    if (valor1 == valor2 || valor1 == valor3 || valor2 == valor3) {
        return 1;
    } else {
        return 0;
    }
}

int escaleno(int valor1, int valor2, int valor3) {
    if (valor1 != valor2 && valor1 != valor3 && valor2 != valor3) {
        return 1;
    } else {
        return 0;
    }
}