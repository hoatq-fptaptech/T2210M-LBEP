#include <stdio.h>
typedef struct SinhVien{
	char tensv[30];
	char email[20];
	int diemthi;
}SV;
int main(){
	SV sv3;
	
	struct SinhVien sv1;
	scanf("%s",sv1.tensv);
	scanf("%d",&sv1.diemthi);
	
	struct SinhVien sv2;
	scanf("%s",sv2.tensv);
	
	struct SinhVien t2210m[26];
	
	for(int i=0;i<26;i++){
		scanf("%s",t2210m[i].tensv);
		scanf("%d",&t2210m[i].diemthi);
	}
}
