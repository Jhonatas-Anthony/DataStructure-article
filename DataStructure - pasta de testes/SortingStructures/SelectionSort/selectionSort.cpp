#include <iostream>

void selectionSort(int arr[], int n, int count) {
    for (int i = 0; i < n-1; i++) {
        int menorValor = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[menorValor]) {
                menorValor = j;
                count++;
            }
            count++;
        }
        std::swap(arr[i], arr[menorValor]);
        count++;
    }
    std::cout << "Quantidade de passos necessários para ordenar este array:" <<count << std::endl;
}

int main() {
    int arr[] = {11, 11, 13, 10, 8, 1, 8, 8, 3, 4}
;
    int n = sizeof(arr)/sizeof(arr[0]);
    int count = 0;
    selectionSort(arr, n, count);
    std::cout << "Array ordenado: ";
    std::cout << std::endl;
    return 0;
}
