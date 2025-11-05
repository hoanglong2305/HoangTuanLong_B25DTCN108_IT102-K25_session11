#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,j;
	int originalSize,searchSize;
	int isExist,result=0;
	
	printf("Nhap vao so ky tu trong chuoi goc: ");
	scanf("%d",&originalSize);
	char originalArr[originalSize];
	printf("Nhap cac ky tu cua chuoi goc: \n");
	for(i=0;i<originalSize;i++){
		fflush(stdin);
		printf("originalArr[%d]= ",i);
		scanf("%c",&originalArr[i]);
	}
	printf("Nhap vao so ky tu trong chuoi tim kiem: ");
	scanf("%d",&searchSize);
	char searchArr[searchSize];
	printf("Nhap cac ky tu cua chuoi tim kiem: \n");
	for(i=0;i<searchSize;i++){
		fflush(stdin);
		printf("SearchArr[%d]= ",i);
		scanf("%c",&searchArr[i]);
	}
	for(i=0;i<originalSize;i++){
		if(originalArr[i]==searchArr[0]){
			isExist=1;
			for(j=1;j<searchSize;j++){
				if(originalArr[i+j]!=searchArr[j]){
					isExist=0;
					break;
				}
			}
			if(isExist){
				result=1;				
			}
		}
	}
	if(result){
		printf("Co tim thay chuoi %s trong chuoi %s\n",searchArr,originalArr);
	}
}
