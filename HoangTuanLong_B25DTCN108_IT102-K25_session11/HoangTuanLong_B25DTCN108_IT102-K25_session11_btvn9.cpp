#include<stdio.h>

int main () {
	int n,i;
	printf("Nhap phan tu mang:");
	scanf("%d",&n);
	int arr[n]; 
	for(int i=0;i<n;i++) {
		printf("Phan tu thu [%d]:",i);
		scanf("%d",&arr[i]); 
	}
	for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }

    printf("\nMang sau khi loai bo trung lap: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n"); 
} 
