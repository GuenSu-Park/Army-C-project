#include <stdio.h>

int main () {
	int N, i, j, z;
	
	printf("�� ���� �ﰢ���� ���Ͻó���?");
	scanf("%d",&N);
	
	for (i=1; i<=N; i++){ //�ﰢ���� ���� ��Ÿ����. 
		for (j=1; j<=i-1; j++){ //�ﰢ���� �ٿ� ���� ��ĭ�� �����ȴ�. 
			printf(" ");
		}	
		for (z=1; z<=N-(2*i-4); z++){ //�ﰢ���� �ٿ� ���� ���� ������ �����ȴ�. 
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
	
	

