#include  <stdio.h>

int main(){
	
	int data[20][20]={0};
	int a,b,c,d;
	
	scanf("%d %d %d %d", &a,&b,&c,&d);
	
	for(int i = 0; i<20; i++){
		for(int j = 0; j<20; j++){
			data[i][j]=0;
		}
	} 
	
	for(int i = a; i<c; i++){
		for(int j = b; j<d; j++){
			data[i][j]=1;
		}
	}
	
	for(int i = 0; i<20; i++){
		for(int j = 0; j<20; j++){
			printf("%d", data[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
