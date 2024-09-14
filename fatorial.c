int potencia(int n){
    if(n == 0){
        return 1;
    }
    return n * potencia(n - 1);
}
int main()
{
    int n = 10;
    printf("  : %d ", potencia(n));
    return 0;
}
