#include <iostream>

void quickSort(int arr[], int left, int right)
    
{
    int count = 0;
    if (left >= right) {
        return;
        count ++;
    }

    int pivot = arr[(left + right) / 2];
    int low = left;
    int hight = right;
    while (low <= hight) {
        while (arr[low] < pivot) {
            low++;
            count ++;
        }
        while (arr[hight] > pivot) {
            hight--;
            count ++;
        }
        if (low <= hight) {
            std::swap(arr[low], arr[hight]);
            low++;
            hight--;
            count++;
        }
        count ++;
    }

    quickSort(arr, left, hight);
    quickSort(arr, low, right);
    std::cout <<count << std::endl;
}

int main()
{
    int arr[] =  {88, 7, 110, 6, 135, 110, 98, 4, 70, 108, 94, 70, 56, 116, 107, 90, 110, 125, 75, 100, 150, 123, 5, 61, 42, 66, 76, 52, 2, 135, 37, 141, 141, 147, 146, 126, 106, 93, 31, 77, 103, 124, 146, 8, 141, 4, 149, 101, 129, 74, 50, 30, 98, 54, 90, 139, 21, 15, 92, 22, 51, 129, 12, 94, 125, 7, 121, 132, 2, 1, 58, 6, 26, 105, 13, 68, 10, 64, 18, 138, 39, 120, 17, 136, 75, 106, 27, 96, 23, 118, 117, 73, 96, 31, 68, 122, 37, 38, 5, 90}

;
    int n = sizeof(arr) / sizeof(arr[0]);
    
    quickSort(arr, 0, n - 1);

    //std::cout << "Quantidade de passos necessários para ordenar este array:" <<count << std::endl;
    
}