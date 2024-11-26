#include<stdio.h>
int main(){
	int a[5]={9,8,1,4,5};
	int min=a[0];
	int max=a[0];
	for(int i=0;i<5;i++){
		if(min>a[i]) 
			min=a[i];
	}
	for(int i=0;i<5;i++){
		if(max<a[i]) 
			max=a[i];
	}
	printf("So lon nhat trong mang:%d\n",max);
	printf("So nho nhat trong mang:%d",min);
}