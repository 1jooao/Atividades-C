#include <stdio.h>

int binario(int n){
    if (n > 1) {
        binario(n / 2);
    }
    printf("%d", n % 2);
}

int main(void){

    return binario(3);

}