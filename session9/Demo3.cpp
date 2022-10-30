#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	printf("Nhap danh sach:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	int x;
	printf("NHap x can tim:");
	scanf("%d",&x);
	
	bool found = false;
	
	for(int i=0;i<n;i++){
		if(x==arr[i]){
			printf("X co trong mang");
			found = true;
			break;
		}
	}
	if(found == false){
		printf("x ko co trong mang");
	}
	
}
