#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i=0;
	int sct=0;
	
	while(i<n){
		if(i%2==0&&i%3==0){
			sct = i;
		}
		i++;
	}
	printf("so can tim: %d",sct);
}
