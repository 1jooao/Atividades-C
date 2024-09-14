#include <stdio.h>

int potencia(int p, int n) {
    if (n == 0) {
        return 1;
    }
    return p * potencia(p, n - 1);
}

int main() {
    int base, expoente;
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    int resultado = potencia(base, expoente);
    printf("%d elevado a %d é %d\n", base, expoente, resultado);

    return 0;
}