#include <stdio.h>
int main(){
	int x = 10;
	int y=20;
	x++;
	y++;
	if(y>20){
		goto ABC;
	}
	printf("Xin chao\n");
	ABC:printf("x=%d\n",x);
	printf("y=%d\n",y);
}
