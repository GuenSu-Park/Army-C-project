#include <stdio.h>

int main() {
	int arr[10];
	int i, ave=0;
	int blank[1]={1};
	int j;
	
	for (i=0; i<=9; i++){
		printf("%d��° �л��� ������?",i+1);
		scanf("%d",&arr[i]); 
	}
	for (i=0; i<=9; i++){
		ave=ave+arr[i];
	}
	ave=ave/10;
	
	printf("��ü �л��� �����: %d \n",ave);
	for(i=0; i<10; i++){
		printf("�л� %d: ",i+1);
		if(arr[i]>=ave) printf("�հ�\n");
		else printf("���հ�\n");
	}
	
	printf("�л����� ����� �����ְڽ��ϴ�. \n");
	for (i=0; i<10; i++){
		printf("%d��: ",i+1);
		for (j=1; j<10; j++){
			if (arr[i]<arr[j]){
				blank[0]=arr[i];
				arr[i]=arr[j];
				arr[j]=blank[0];
			}
		}
		printf("(%d) \n",arr[i]);
	}
	return 0;
}
