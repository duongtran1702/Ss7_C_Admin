#include<stdio.h>
int main(){
	int n;
	printf("Nhap vao so luong phan tu :");
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		printf("Nhap vao phan tu thu %d :",i+1);
		scanf("%d",&a[i]);
	}
	printf("In mang :\n");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}