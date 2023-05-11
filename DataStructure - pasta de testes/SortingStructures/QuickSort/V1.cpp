#include <iostream>
int count = 0;

void quickSort(int arr[], int left, int right)
{
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
}

int main()
{
    int arr[] =  {360, 1917, 100, 1659}



;
    int n = sizeof(arr) / sizeof(arr[0]);
    
    quickSort(arr, 0, n - 1);

    std::cout <<count << std::endl;
}