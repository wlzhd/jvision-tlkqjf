#include <stdio.h>

int getMax(int score[]){

	int max = 0;
	
	for(int i = 0; i<5; i++){
		if(max < score[i]){
			max = score[i];
		}	
	}

return max;	
}

int main(){
	
	int a[5]={0};
	
	//입력
	printf("숫자 입력 : ");
	for(int i = 0; i<5; i++){
		scanf("%d", &a[i]);
	} // END OF FOR = I
	
	// 출력 
	printf("최대값 : "); 
	printf("%d",getMax(a));
	
	return 0;
}
