#include <stdio.h>
#include <stdlib.h>

void selection_sort(int *, int);
void printArray(int *, int);

int main() {
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    selection_sort(arr, n);
    printArray(arr, n);
    free(arr);
    return 0;
}

void selection_sort(int *arr, int size) {
    for (int i = size - 1; i >= 0; i--) {
        int maxIdx = i;
        for (int j = i; j >= 0; j--) {
            if (arr[j] > arr[maxIdx]) {
                maxIdx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[maxIdx];
        arr[maxIdx] = temp;
    }
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf(" %d", arr[i]);
    }
    printf("\n");
}