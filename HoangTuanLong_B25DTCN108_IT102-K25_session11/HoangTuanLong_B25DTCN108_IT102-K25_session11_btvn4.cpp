#include <stdio.h>

int main() {
	int n,i;
	int temp;
	printf("Nhap so phan tu cua mang:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				
			}
		}
	}
	printf("Mang sau khi sap xep la:");
	for (i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
