#include<stdio.h>
int main(){
	int row,col;
	printf("Nhap vao so hang:");
	scanf("%d",&row);
	printf("Nhap vao so cot:");
	scanf("%d",&col);
	int a[row][col];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("Nhap vao phan tu o hang %d cot %d :",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Phan tu nam o duong bien :\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(i==0||i==row-1||j==0||j==col-1){
				printf("%d ",a[i][j]);
			}
			else 
			printf("  ");
		}
		printf("\n");
	}
}