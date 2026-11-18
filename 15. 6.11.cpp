#include <stdio.h>

#define SIZE 10

void bubbleSort(int array[], const int size);
void printArray(const int array[], const int size);

int main(void) {
    int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

    printf("Data items in original order\n");
    printArray(a, SIZE);

    bubbleSort(a, SIZE);

    printf("\nData items in ascending order\n");
    printArray(a, SIZE);

    return 0;
}

void bubbleSort(int array[], const int size) {
    for (int pass = 0; pass < size - 1; ++pass) {
        int swapped = 0;

        for (int j = 0; j < size - 1 - pass; ++j) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = 1;
            }
        }

        if (!swapped) {
            break;
        }
    }
}

void printArray(const int array[], const int size) {
    for (int i = 0; i < size; ++i) {
        printf("%4d", array[i]);
    }
    printf("\n");
}