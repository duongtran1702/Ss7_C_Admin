#include<stdio.h>
int main (){
	int a[5]={1,7,3,9,5};
	int index=0;
	for(int i=0;i<5;i++){
		if(a[i]%2==0) {
				printf("%d ",a[i]);
				index+=1;
		}			
	}
	if(index==0){
		printf("Mang khong co so chan !");
	}	
	return 0;
}