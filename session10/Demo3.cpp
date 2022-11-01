#include <stdio.h>
#include <stdlib.h>
int trungbinhcong(int arr[],int n){
	
}
int trungbinhcong2(int *arr,int n){
	
}
int main(){
	int *p;
	//p = (int *)malloc(5*sizeof(int)); // int p[5]
	p = (int *)calloc(5,sizeof(int));
	// gia su can them 3 phan tu nua cho mang
	p = (int *)realloc(p,8*sizeof(int)); // p mang 8 phan tu
	
	free(p);
}
