#include <stdio.h>

int sumArray(int *arr, int size) {
    int sum = 0;
    int *ptr = arr;

    for (int i = 0; i < size; i++) {
        sum += *ptr;
        ptr++;
    }

    return sum;
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = sumArray(arr, size);

    printf("The sum of the elements in the array is: %d\n", sum);

    return 0;
}