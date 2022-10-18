#include <stdio.h>
int main(){
	int s=4000;
	int y=0;
	int n;
	scanf("%d",&n);
	while(y<n){
		// yes
		int l = s*8/100;
		s+=l;
		y++;
	}
	// no
	printf("sau %d nam se co so tien: %d",n,s);
}
