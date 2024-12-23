#include <stdio.h>

int sumaOresta(int a, int b, int op) {
    if (op == 1) {
        return a + b;
    } else {
        return a - b;
    }
}

int multiplicacion(int a, int b) {
    return a * b;
}

int cuadrado(int a) {
    return a * a;
}

int main() {
    printf("Bye, World!\n");
    printf("Suma: %d\n", sumaOresta(2, 3, 1));
    printf("Resta: %d\n", sumaOresta(2, 3, 0));
    printf("Multiplicacion: %d\n", multiplicacion(2, 3));
    printf("Cuadrado: %d\n", cuadrado(2));
    return 0;
}