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
	
	//�Է�
	printf("���� �Է� : ");
	for(int i = 0; i<5; i++){
		scanf("%d", &a[i]);
	} // END OF FOR = I
	
	// ��� 
	printf("�ִ밪 : "); 
	printf("%d",getMax(a));
	
	return 0;
}
