#include <stdio.h>

int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int main() {
    printf("Bye, World!\n");
    printf("Suma: %d\n", suma(2, 3));
    printf("Resta: %d\n", resta(2, 3));
    return 0;
}