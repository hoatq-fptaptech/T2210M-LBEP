#include <stdio.h>
int main(){
	int n;
	do{
		printf("Vui long nhap 1 so khac 0:");
		scanf("%d",&n);
	}while(n==0);
	int x =0;
	while(n!=0){
		int sd = n%10;
		if(sd>x){
			x=sd;
		}
		n = n/10;
	}
	printf("Chu so lon nhat: %d",x);
}
