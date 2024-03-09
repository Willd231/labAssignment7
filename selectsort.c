#include <stdio.h>

int arr1[9] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
int arr2[9] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
int nS[9] = {0};
int mS[9] = {0};
int minCount1[9] = {0};
int minCount2[9] = {0};
int tempCount1[9] = {0};
int tempCount2[9] = {0};
int combinedCount1[9] = {0};
int combinedCount2[9] = {0};

void selectionSort(int arr[], int size, int swapCount[], int minCount[], int tempCount[], int combinedCount[]) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
            swapCount[i]++;
            minCount[minIndex]++;
            tempCount[i]++;
        }
    }
    for (int i = 0; i < size; i++) {
        combinedCount[i] = minCount[i] + tempCount[i];
    }
}

int main() {
    selectionSort(arr1, 9, nS, minCount1, tempCount1, combinedCount1);
    selectionSort(arr2, 9, mS, minCount2, tempCount2, combinedCount2);

    printf("Combined counts for arr1:\n");
    for (int i = 0; i < 9; i++) {
        printf("%d\n", combinedCount1[i]);
    }

    printf("Combined counts for arr2:\n");
    for (int i = 0; i < 9; i++) {
        printf("%d\n", combinedCount2[i]);
    }

    int total1 = 0, total2 = 0;
    for (int i = 0; i < 9; i++) {
        total1 += combinedCount1[i];
        total2 += combinedCount2[i];
    }

    printf("Total combined count for arr1: %d\n", total1 / 2);
    printf("Total combined count for arr2: %d\n", total2 / 2);

    return 0;
}
