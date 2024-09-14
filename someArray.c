int somaVet(int arr[], int n){

    if(n <= 0){
        return 0;
    }
    return arr[n - 1] + somaVet(arr, n -1);

}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("A soma dos elementos do array é: %d\n", somaVet(arr, n));

    return 0;
}