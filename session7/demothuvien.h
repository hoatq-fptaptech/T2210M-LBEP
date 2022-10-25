int timdaonguoc(int n){
	int x =0;
	while(n!=0){
		int sd = n%10;
		x = x*10+ sd;
		n/=10;
	}
	return x;
}
void showMenu(){
	printf("1. Pho ga\n");
	printf("2. Pho bo\n");
	printf("3. Com rang\n");
	printf("4. Coca\n");
}

bool ktSoDuong(int n){
	if(n>0){
		return true;
	}
	return false;
}

bool ktSNT(int n){
	if(n<2){
		return false;
	}
	if(n==2 || n==3){
		return true;
	}
	int i=2;
	while(i<=n/2){
		if(n%i==0){
			return false;
		}
		i++;
	}
	return true;
}
int timsolonnhattrong3so(int a,int b,int c){
	if(a>b && a>c){
		return a;
	}else if(b>c && b>a){
		return b;
	}else{
		return c;
	}
}

int timsofibonaci(int n){
	if(n<=0){
		return 0;
	}
	if(n<3){
		return 1;
	}
	int x0=0,x1=1,x2=1;
	for(int i=3;i<=n;i++){
		x0=x1;
		x1=x2;
		x2=x0+x1;
	}
	return x2;
}

