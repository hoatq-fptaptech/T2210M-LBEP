#include <stdio.h>
#include "demothuvien.h"
int main(){
	showMenu();
	int x ;
	scanf("%d",&x);
	if(ktSoDuong(x)){
		printf("%d la so duong\n",x);
	}else{
		printf("%d khong phai so duong\n",x);
	}
	if(ktSNT(x)){
		printf("%d la so nguyen to\n",x);
	}
}



