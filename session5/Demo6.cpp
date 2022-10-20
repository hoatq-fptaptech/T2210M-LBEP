#include <stdio.h>
int main(){
	int n;
	do{
		printf("Vui long nhap 1 so duong:");
		scanf("%d",&n);
	}while(n<=0);
	int x =0;
	for(int i=1;i<n;i++){
		if(n%i==0){
			x+=i;
		}
	}
	if(n==x){
		printf("Day la so hoan hao");
	}else{
		printf("Day khong phai la so hoan hao");
	}
	
}
