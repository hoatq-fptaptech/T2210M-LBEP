#include <stdio.h>
int timMax(int arr[],int n){
	int h = arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>h){
			h = arr[i];
		}
	}
	return h;
}
int main(){
	int n;
	scanf("%d",&n);
	int ary[n];
	
	for(int i=0;i<n;i++){ // duyet mang
		scanf("%d",&ary[i]);
	}
	int high = timMax(ary,n);

	printf("Max: %d\n",high);
	// tim so gan lon nhat
	// tim tai day sau khi da co high
	// ary[i] < high && high2 < ary[i]
	int high2 = high;// phai chon 1 gia tri cua mang ma ko phai so lon nhat
	for(int i=0;i<n;i++){
		if(ary[i]<high){
			high2 = ary[i];
			break;
		}
	}
	if(high2 == high){
		printf("mang co cac so giong nhau");
	}else{
		for(int i=0;i<n;i++){
			if(ary[i] > high2 && ary[i] < high){
				high2 = ary[i];
			}
		}
		printf("Max2 : %d\n",high2);
	}
	
}
