#include <stdio.h>

int main() {
	int i, N;
	int j=1;
	
	printf("������� ���� ���Ͻó���?");
	scanf("%d",&N);
	
	for(i=1; i<=N; i++){
		j=i*j;
	}
	printf("1���� %d������ ���� ����%d�̴�",N,j);
	
	return 0;
}
