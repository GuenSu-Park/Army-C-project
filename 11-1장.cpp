#include <stdio.h>

int main() {
    int arr[3][3]={1,2,3,4,5,6,7,8,9,}; //3x3���� 3���� ���ڰ� �ƴ϶� 9���� ���ڰ� �־����. 
    
    printf("arr �迭�� 2�� 3���� ���� ���: %d \n",arr[1][2]);
    printf("arr �迭�� 1�� 2���� ���� ���: %d \n",arr[0][1]);
    return 0;
}


#include <stdio.h>

int main() {
    int score[3][2]; //3 ���� �л��� 2 ������ �����͸� �����ϴ� score 2 ���� �迭
    int i, j;
    
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            if (j==0){
                printf("%d��° �л��� ���� ����: ",i+1);
                scanf("%d",&score[i][j]);
            }
            else if (j==1){
                printf("%d��° �л��� ���� ����: ",i+1);
                scanf("%d",&score[i][j]);
            }
        }
    }
    
    for(i=0; i<3; i++){
        printf("%d��° �л��� ���� ����: %d, ���� ����: %d \n",i+1,
               score[i][0],score[i][1]);
    }
    
    return 0;
}
