#include <stdio.h>

int main(){
	int N;
	int i=2;
	
	printf("���μ� ���� �� �ڿ����� �Է����ּ���.");
	scanf("%d",&N);
	
	printf("%d=",N);
	
	while(i){//�翬�� for���� �� ������ �˾Ҵµ� �ƴϿ��ٰ� �Ѵ�; 
		if(N%i==0){
			N=N/i; //�������� ��Ÿ���� ������ �Ƚᵵ �ǰ� ��. 
			printf("%d",i);
			if(N==1) break; //N�� �������� �ǹ��ϴ� �� �� �ٷ� while���� �������� �� �ִ�. �̰� ���ɻ����ϳ�? 
			printf("*");
		}
		else{
			i++;
		}
	}
	
	return 0;
}

