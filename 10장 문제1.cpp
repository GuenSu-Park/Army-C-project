#include <stdio.h>

int main() {
	float f;
	int i;
	
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%f",&f);
	
	if (f>=0){
		i=(f-(int)f)*100; //f���� ��Ÿ���� �� �ٸ� ������ ������ �������� �ʱ� ���ؼ� ���� �����ε�. 
	}
	else {
		i=((int)f-f)*100;
	}  
	/* �̷��� if-else���� �ƴ϶� �׳� i�� ������ �� -�� �ٿ��ִ� if�����ε� ���� �� ����.
	if(i<0) i=-i*/ 
	
	printf("i=%d \n",i);
	
	return 0;
	
}
