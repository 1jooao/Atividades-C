#include <stdio.h>

int fibo(int n){

    if (n <= 1){
        return n;
    }
    return fibo(n - 1) + fibo(n - 2);

}
int main(void){

    int num = 3;
    
    printf("resultado e %d",fibo(num));

}