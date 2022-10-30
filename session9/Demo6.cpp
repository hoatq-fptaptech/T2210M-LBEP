#include <stdio.h>
#include <string.h>

int demSoChuCaiA(char s[]){
	int dodai = strlen(s);
	int c = 0;
	for(int i=0;i<dodai;i++){
		if(s[i] == 'a'){
			c++;
		}
	}
	return c;
}

int main(){
	char s1[50],s2[50];
	scanf("%s",s1);// A
	scanf("%s",s2);// B
	strcmp(s2,s1);
	strlen(s1);// 1
	strcat(s1,s2);// => s1: AB s2: B
	strcat(s2,s1);// s1: AB s2: BAB
	char ch = 'k';
	strchr(s1,ch);// tra ve dia chi cua chu cai k trong chuoi s1, neu ko co tra ve null
	
	strcpy(s1,s2);// s1 =s2;
	
//	int len = 0;
//	for(int i=0;i<50;i++){
//		if(s1[i] == NULL){
//			break;
//		}
//		len++;
//	}

}
