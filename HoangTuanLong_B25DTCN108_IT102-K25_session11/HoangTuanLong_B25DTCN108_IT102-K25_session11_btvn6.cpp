#include <stdio.h>

int main () {
	int i;
	int n;
	printf("nhap so phan tu cua mang:");
	scanf("%d",&n);
	int arr[n];
	n = sizeof(arr)/sizeof(arr[0]);
	if (arr[i]< 2){
		printf("so phan tu nhap bi loi ,vui long nhap lai");
	}else{
	for(int i =0;i<n;i++){
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
}
int max1,max2;
	if(arr[0]>arr[1]){
		max1=arr[0];
		max2=arr[1];
	}else {
		max1=arr[1];
		max2=arr[0];
	}
	for (int i =2;i<n;i++){
		if(arr[i]>max1){
			max2 = max1;
			max1 = arr[i];
		}else if(arr[i]>max2 && arr[i]!=max1){
			max2 = arr[i];
		}
	}
	if(max1==max2){
		printf("Vui long nhap lai gia tri");
	}else {
		printf("phan tu lon thu nhat la:%d",max1);
		printf("\nphan tu lon thu hai la:%d",max2);
	}
}
