#include <stdio.h>
int main(){
	int x = 10;
	if(x>5){
		int y= x+5;
	}
	//printf("y= %d",y);
	
	int i=0;
	while(i>0){
		printf("While ....");
	}
	do{
		printf("Do...While...");
	}while(i>0);
	
	int n;
	do{
		printf("Vui long nhap 1 so nguyen duong:");
		scanf("%d",&n);
	}while(n<=0);
	// lam sao de ra day duoc 1 so nguyen duong
	
	printf("Vui long nhap 1 so nguyen duong:");
	scanf("%d",&n);
	while(n<=0){
		printf("Vui long nhap 1 so nguyen duong:");
		scanf("%d",&n);
	}	
}
