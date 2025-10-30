#include <stdio.h>

int main(){
    printf("--- 구구단 출력 ---\n");
    for(int i=2;i<=9;i++){
        printf("\n----%d 단----\n");
        for(int j=1;j<=9;j++){
            printf("%d X %d = %d\n",i,j,i*j);
        }
    }
    printf("---구구단 끝---");
    return 0;
}