#include <iostream>

void insertionSort(int arr[], int length, int count){
    for ( int i = 1 ; i < length ; i ++){
        int temp = arr[i];
        int j = i - 1;
        while(j >= 0 && temp <= arr[j])  
        {  
            std::swap(arr[j+1], arr[j]);
            j = j - 1;  
            count++;
        }  
        arr[j+1] = temp;
        count++;
    }

    std::cout << std::endl;
    std::cout << count << std::endl;
}

int main(){
    int array[] = {11, 11, 13, 10, 8, 1, 8, 8, 3, 4}

;
    int length = sizeof(array) / sizeof(array[0]);
    int count = 0;
    insertionSort(array, length, count);
    return 0;
}