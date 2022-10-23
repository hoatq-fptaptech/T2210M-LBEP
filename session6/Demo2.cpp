#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i=n-1;
	int sct=0;
	
	while(i<n){
		if(i%2==0&&i%3==0){
			sct = i;
			break;
		}
		i--;
	}
	printf("so can tim: %d",sct);
}
