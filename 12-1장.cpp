#include <stdio.h>

int main() {
    int *p;
    int a;
    
    p=&a;
    a=2;
    
    printf("a�� ��: %d\n",a);
    printf("*p�� ��: %d \n",*p); 
    /* *p �� ���� p �� ����� �ּ�(���� a �� �ּ�)�� �ش��ϴ� ������, �� ���� a �� ��ü�� �ǹ��� �� 
	�ְ� �˴ϴ�. �ٽ� ���� *p �� ���� a �� ��Ȯ�� �����մϴ�. */
    
    return 0;
}


#include <stdio.h>

int main() {
    int *p;
    int a;
    
    p=&a;
    *p=3;
    
    printf("a�� ��: %d \n",a);
    printf("*p�� ��: %d \n",*p);
    /* *p �� ���� "���� ����� �ּ�(���� a �� �ּ�)�� �ش��ϴ� ������(���� a) �� �����Ͻÿ�" �� �ǹ��Ͽ� 
	*p = 3 �� a = 3 �� ������ �ǹ̸� ���ϰ� �Ǿ����ϴ�. */
	
    return 0;
}


#include <stdio.h>

int main() {
    int a;
    int b;
    int *p;
    
    p=&a;
    *p=2;
    p=&b;
    *p=4;
    
    printf("a:%d \n",a);
    printf("b:%d \n",b);
    // �����͵� �����̱� ������ ���� �ٲ� ���� �ִ�! 
    
    return 0;
}
