#include <iostream>

void bubbleSort(int arr[], int n, int count)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                std::swap(arr[j], arr[j + 1]);
                count ++;
            }
            count ++;
        }
        count ++;
    }
    std::cout << "Quantidade de passos necessários para ordenar este array:" <<count << std::endl;
}

int main()
{
    int array[] = {11, 11, 13, 10, 8, 1, 8, 8, 3, 4}; // array desordenado
    int length = sizeof(array) / sizeof(array[0]);
    int count = 0;
    bubbleSort(array, length, count);
    std::cout << "Array ordenado: ";
    for (int i = 0; i < length; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}