
#include<stdio.h>

#define SIZE 7

void insertAndShift(int arr[], int len, int index, int num) {
    if(index < 0 || index >= len) {
        printf("Index out of bounds\n");
        return;
    }

    for (int i = len - 1; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    arr[index] = num;
}

int main() {
    int arr[SIZE] = {2, 5, 6, 7, 8, 5, 4};
    int index, num;

    printf("Give the Array index : ");
    scanf("%d", &index);

    printf("Enter the Number : ");
    scanf("%d", &num);

    insertAndShift(arr, SIZE, index, num);

    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
