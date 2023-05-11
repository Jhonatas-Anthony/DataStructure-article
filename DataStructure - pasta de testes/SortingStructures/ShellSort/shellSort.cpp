#include <iostream>

void shellSort(int arr[], int n, int count) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
                count ++;
            }
            arr[j] = temp;
            count ++;
        }
        count ++;
    }
    std::cout <<count << std::endl;
}

int main() {
    int arr[] =  {100, 1659}
;
    int count = 0;
    int n = sizeof(arr) / sizeof(arr[0]);

    shellSort(arr, n, count);

    std::cout << std::endl;
    return 0;
}
