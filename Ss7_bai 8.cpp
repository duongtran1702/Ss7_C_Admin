#include<stdio.h>
int main(){
	int row,col;
	printf("Nhap vao so hang:");
	scanf("%d",&row);
	printf("Nhap vao so cot:");
	scanf("%d",&col);
	int a[row][col];//a[hang][cot]
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("Nhap vao phan tu o hang %d cot %d :",i+1,j+1);//nhap hang truoc,cot sau
			scanf("%d",&a[i][j]);
		}
	}
	printf ("In mang:\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}