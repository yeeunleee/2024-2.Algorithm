#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int *, int);
void printArray(int *, int);

int main() {
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    insertion_sort(arr, n);
    printArray(arr, n);
    free(arr);
    return 0;
}

void insertion_sort(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                for (int k = i; k >= j + 1; k--) {
                    arr[k] = arr[k - 1];
                }
                arr[j] = temp;
            }
        }
    }
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf(" %d", arr[i]);
    }
    printf("\n");
}