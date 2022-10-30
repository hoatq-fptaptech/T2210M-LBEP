#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	printf("Nhap danh sach:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=n-1;i>=0;i--){
		if(arr[i] %2 != 0){
			printf("So le cuoi cung: %d",arr[i]);
			break;
		}
	}
	
}
