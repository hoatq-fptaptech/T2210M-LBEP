#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	printf("Nhap danh sach:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	int t=0,d=0;
	
	for(int i=0;i<n;i++){
		if(arr[i] %2 != 0){
			t+= arr[i];
			d++;
		}
	}
	
	float tbc = (float)t/d;
	printf("TBC cac so le: %f",tbc);
}
