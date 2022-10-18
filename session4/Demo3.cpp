#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	float s=0;
	int i=1;
	while(i<=n){
		s = s + 1.0/i;
		i++;
	}
	printf("s = %f",s);
}
