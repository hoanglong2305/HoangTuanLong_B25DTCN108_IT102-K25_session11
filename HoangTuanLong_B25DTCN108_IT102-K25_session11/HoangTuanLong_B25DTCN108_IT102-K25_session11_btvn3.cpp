#include <stdio.h>

int binarySearch(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) {
            return mid;
        }
        if (arr[mid] < x) {
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Mang da sap xep:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    int x;
    printf("Nhap mot so nguyen de tim kiem: ");
    scanf("%d", &x);

    int result = binarySearch(arr, n, x);
    if (result == -1) {
        printf("\n=> Khong tim thay phan tu %d trong mang.\n", x);
    } else {
        printf("\n=> Tim thay phan tu %d tai chi so (index): %d\n", x, result);
    }

    return 0;
}
