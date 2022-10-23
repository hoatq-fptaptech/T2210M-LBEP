#include <stdio.h>
int main(){
	int a,b;
	do{
		printf("Nhap so nguyen duong thu nhat: ");
		scanf("%d",&a);
	}while(a<=0);
	do{
		printf("Nhap so nguyen duong thu hai: ");
		scanf("%d",&b);
	}while(b<=0);
	
	int ucln = 1;
	// tim so nho hon trong 2 so
	int min = a;
	if(min > b){
		min = b;
	}
	for(int i=min;i>1;i--){
		if(a%i==0&&b%i==0){
			ucln = i;
			break;
		}
	}
	printf("UCLN: %d\n",ucln);
	
	int bcnn = a*b;
	for(int i=a;i<bcnn;i++){
		if(i%a==0&&i%b==0){
			bcnn= i;
			break;
		}
	}
	printf("BCNN: %d\n",bcnn);
}
