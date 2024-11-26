#include<stdio.h>
#include<math.h>
int prime_number(int n){
	if(n<2) {
		return 0;
	}
	for(int i=2;i<sqrt(n);i++){
		if(n%i==0)
		return 0;
	}
	return 1;
}

int main(){
	int row,col;
	printf("Nhap vao so hang :");
	scanf("%d",&row);
	printf("Nhap vao so cot :");
	scanf("%d",&col);
	int admin[row][col];
	for (int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("Nhap vao phan tu o hang %d cot %d :",i+1,j+1);
			scanf("%d",&admin[i][j]);
		}
	}
	printf("\nCac so nguyen to la :");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(prime_number(admin[i][j])==1){
				printf("%d ",admin[i][j]);	
			}		
		}
	}
}




