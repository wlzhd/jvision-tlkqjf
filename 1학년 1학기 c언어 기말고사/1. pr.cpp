#include <stdio.h>

int main(){
	
	int a[5][5]={0};
	int i = 0;
	int j = 0;
	int b = 1;
	
	//초기화 
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			a[i][j]=0;
		}
	}
	
	//계산 
	for(i=0; i<5; i++){
		for(j=4-i; j<5; j++){
			a[i][j]=b++;
		}
	}
	
	//출력 
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			if(a[i][j]==0){
				printf("   ");
			}else{
			printf("%3d", a[i][j]);
		}
		}
		printf("\n");
	}
	
	
	return 0;
}
