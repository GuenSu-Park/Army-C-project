#include <stdio.h>

int main () {
	int i;
	int sum=0;
	
	for (i=1; i<=1000; i++){
		if (i%3==0 || i%5==0){ //���� 3�ǹ�� 5�� ��� ���� �����ʿ䰡 ���� 15�� ����� ���� �� �ʿ䰡 ����. 
			sum=sum+i;
		}
	}
	printf("%d",sum);
	return 0;
}
	
	

