#include <stdio.h>

int tinhTong(int a,int b){
	int c = a+b;
	return c;
}
// viet ham tim so lon hon trong 2 so nguyen
int max(int a,int b){
	if(a > b){
		return a;
	}
	return b;	
}

int main(){
	int x =10, y=20;
	int z = tinhTong(x,y);
	int m= max(x,y);
	printf("z = %d\n",z);
	printf("So lon hon: %d",m);
}
