#include <stdio.h>

int main () {
	int N, i, j, z;
	
	printf("�� ���� �ﰢ���� ���Ͻó���?");
	scanf("%d",&N);
	
	for (i=1; i<=N; i++){ //�ﰢ���� ���� ��Ÿ����. 
		for (j=1; j<=N-i; j++) { //�ﰢ���� ���� ���� ���� ��ĭ�� ����.
			printf(" "); 
		}
		for (z=1; z<=2*i-1; z++){ //�ﰢ���� ���� ���� Ȧ�� ������ ���� ��´�. 
			printf("*");
		}
		printf("\n"); 
		}
	return 0;	
	}
	
	

