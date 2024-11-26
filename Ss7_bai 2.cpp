#include<stdio.h>
int main(){
	int a[5];
	for (int i=0;i<5;i++){
		printf("Nhap vao phan tu thu %d :",i+1);
		scanf("%d",&a[i]);
	}
	printf("In mang :\n");
	for(int i=0;i<5;i++){
		printf("%d ",a[i]);
	}
}