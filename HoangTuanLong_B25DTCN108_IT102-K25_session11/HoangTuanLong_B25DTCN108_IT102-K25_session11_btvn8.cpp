#include <stdio.h>

int main () {
	int n,i;
	printf("Nhap phan tu mang:");
	scanf("%d",&n);
	int arr[n];
	n=sizeof(arr)/sizeof(arr[0]);
	for (i=0;i<n;i++){
		printf("Phan tu thu [%d]",i);
		scanf("%d",&arr[i]);
	}
	int maxcount = 0;
	int mostvalue=arr[0];
	for (int i=0;i<n;i++){
		int count =0;
		for(int j =0;j<n;j++){
			if(arr[i]==arr[j]){
				count++;
			}
		}
		if (count>maxcount) {
			maxcount = count;
			mostvalue = arr[i];
		}
	}
	printf("phan tu xuat hien nhieu nhat la:%d",mostvalue);
	printf("\nso lan xuat hien:%d",maxcount);
	return 0;
}
