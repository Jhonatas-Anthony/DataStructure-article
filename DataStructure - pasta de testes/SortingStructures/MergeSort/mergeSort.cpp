#include <iostream>

int count = 0;

void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++) {
        L[i] = arr[l + i];
        count ++;
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[m + 1 + j];
        count ++;
    }
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
            count ++;
        } else {
            arr[k] = R[j];
            j++;
            count ++;
        }
        k++;
        count ++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
        count ++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
        count ++;
    }
    
}

void mergeSort(int arr[], int l, int r) {
    
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
        count++;
    }

}

int main() {
    int arr[] = {11, 11, 13, 10, 8, 1, 8, 8, 3, 4}

;
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    std::cout << std::endl;

    mergeSort(arr, 0, arr_size - 1);

    std::cout << count << std::endl;
    std::cout << std::endl;
    return 0;
}
