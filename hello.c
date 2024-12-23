#include <stdio.h>

int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int multiplicacion(int a, int b) {
    return a * b;
}

int cuadrado(int a) {
    return a * a;
}

int main() {
    printf("Bye, World!\n");
    printf("Suma: %d\n", suma(2, 3));
    printf("Resta: %d\n", resta(2, 3));
    printf("Multiplicacion: %d\n", multiplicacion(2, 3));
    printf("Cuadrado: %d\n", cuadrado(2));
    return 0;
}