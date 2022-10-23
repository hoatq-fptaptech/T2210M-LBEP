#include <stdio.h>
int main(){
	// 2
	for(int i=0;i<5;i++){
		for(int j=0;j<4;j++){
			printf("* ");
		}
		if(i%2==0){
			printf("* ");
		}
		printf("\n");
	}
	//3
	for(int i=0;i<5;i++){
		for(int j=0;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	// 4
	for(int i=0;i<5;i++){
		for(int j=0;j<=i;j++){
			for(int k=0;k<=i;k++){
				printf("*");
			}
			printf(" ");
		}
		printf("\n");
	}
	
}
