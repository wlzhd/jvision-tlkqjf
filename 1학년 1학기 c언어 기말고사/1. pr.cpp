#include <stdio.h>

int main(){
	
	int a[5][5]={0};
	int i = 0;
	int j = 0;
	int b = 1;
	
	//�ʱ�ȭ 
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			a[i][j]=0;
		}
	}
	
	//��� 
	for(i=0; i<5; i++){
		for(j=4-i; j<5; j++){
			a[i][j]=b++;
		}
	}
	
	//��� 
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
