#include<stdio.h>
int main(){
	int i,j,size,tmp;
	int searchValue,left,right,mid;
	printf("Nhap vao so phan tu cua mang: ");
	scanf("%d",&size);
	int numbers[size];
	for(i=0;i<size;i++){
		printf("Numbers[%d] = ",i);
		scanf("%d",&numbers[i]);
	}
	printf("\nNhap vao gia tri can tim: ");
	scanf("%d",&searchValue);
	for(i=0;i<size-1;i++){
		for(j=i+1;j<size;j++){
			if(numbers[i]>numbers[j]){
				tmp=numbers[i];
				numbers[i]=numbers[j];
				numbers[j]=tmp;
			}
		}
	}
	printf("\nMang sau khi da sap xep la: ");
	for(i=0;i<size;i++){
		printf("%d ",numbers[i]);
	}
	left = 0; right = size - 1;
	do{
		mid = left + (right - left)/2;
		if(numbers[mid]>searchValue){
			right = mid - 1;
		}
		if(numbers[mid]<searchValue){
			left = mid + 1;
		}
	}while(numbers[mid]!=searchValue && left != right);
	if(numbers[mid] == searchValue){
		printf("\nPhan tu co chi so %d co gia tri bang %d\n",mid,searchValue);
	}else{
		printf("\nKhong tim thay phan tu nao co gia tri bang %d\n",searchValue);
	}
}

