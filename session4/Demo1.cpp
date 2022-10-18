#include <stdio.h>
int main(){
	int x = 10;
	
	if(x > 5){
		printf("A");
	}else if(x > 8){
		printf("B");
	}else if(x> 10){
		printf("C");
	}else{
		printf("D");
	}
	
	
	switch(x+5){
		case 5: printf("AA");break;
		case 10: printf("BB");break;
		case 15: printf("CC");break;
		case 20: printf("DD");break;
		default: printf("EE");
	}
	
	if(x+5== 5){
		//AA
	}else if(x+5==10){
		//BB
	}else if(x+5 == 15){
		//CC
	}else if(x+5 == 20){
		//DD
	}else{
		// EE
	}
	
	if(x>10){
		//XX
	}else{
		// YYY
	}
	switch(x>10){
		case true: // XX;
		case false: // YY;
	}
}
// A: 5
// B: 0
// C: 0
// D: 0
// AB: 15
// ABC: 
// ABCD
