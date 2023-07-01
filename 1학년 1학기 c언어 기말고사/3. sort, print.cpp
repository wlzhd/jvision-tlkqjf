#include <stdio.h>

// 정렬 
void sort(int a[3][4]){
	int i = 0;
	int j = 0;
	int k = 0;
	int temp[3]={0};
	
	for(k=0; k<4; k++){
		for(i = 0; i<3; i++){
			for(j=1+i; j<3; j++){
				if(a[j][3]<a[i][3]){
					temp[k] = a[i][k];
					a[i][k] = a[j][k];
					a[j][k] = temp[k];
					}
				}
			}
		}
	}

// 정렬 후 출력 
void print(int a[3][4]){
	int i = 0;
	int j = 0;
	
	printf("*** 정렬 후 ***\n");
	printf("국어  영어  수학  총점\n");
	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			printf(" %3d  ",a[i][j]);
		}
		printf("\n");
	}
}

int main(){
	
	int a[3][4]={0};
	int i, j = 0;
	
	// 점수 입력 
	for(i=0; i<3; i++){
		printf("세 과목 성적 입력(국어, 영어, 수학) : ");
		for(j=0; j<3; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	// 합계
	for(i=0; i<4; i++){
		a[i][3]=a[i][2]+a[i][1]+a[i][0];
	}
	
	// 정렬 전 출력 
	printf("*** 정렬 전 ***\n");
	printf(" 국어  영어  수학  총점\n");
	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			printf(" %3d  ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	// 정렬  후 출력 
	sort(a);
	print(a);
	
	return 0;
}
