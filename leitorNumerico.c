#include <stdio.h>

int contaNumero(int n, int k){

    if (n == 0){
        return 0;
    }
    return ( n % 10 == k ? 1 : 0) + contaNumero(n / 10, k);

}
int main(void){

    int percorre;
    int num = 223344559;

    printf("escolha um numero que direi quantas vezes ele se repete na seguinte sequencia de digitos %d", num);
    scanf("%d", &percorre);

    printf("o numero %d esta presente %d vezes", num, contaNumero(num, percorre));
}