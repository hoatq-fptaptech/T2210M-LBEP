#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int i=0;
	while(i<n){
		if(i%2==1){
			printf("So le: %d\n",i);
		}
		i++;
	}
}
