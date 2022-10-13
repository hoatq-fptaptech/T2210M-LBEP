#include <stdio.h>
int main(){
	int a;
	int b;
	scanf("%d",&a);
	scanf("%d",&b);
	
	if(a>b){
		printf("max la %d",a);
	}else{
		if(a==b){
			printf("Hai so bang nhau");
		}else{
			printf("%d la max",b);	
		}
	}
}
