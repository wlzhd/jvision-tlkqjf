#include <stdio.h>

// ���� 
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

// ���� �� ��� 
void print(int a[3][4]){
	int i = 0;
	int j = 0;
	
	printf("*** ���� �� ***\n");
	printf("����  ����  ����  ����\n");
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
	
	// ���� �Է� 
	for(i=0; i<3; i++){
		printf("�� ���� ���� �Է�(����, ����, ����) : ");
		for(j=0; j<3; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	// �հ�
	for(i=0; i<4; i++){
		a[i][3]=a[i][2]+a[i][1]+a[i][0];
	}
	
	// ���� �� ��� 
	printf("*** ���� �� ***\n");
	printf(" ����  ����  ����  ����\n");
	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			printf(" %3d  ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	// ����  �� ��� 
	sort(a);
	print(a);
	
	return 0;
}
