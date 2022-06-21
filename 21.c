#include<stdio.h>

int main(){
    int sum=0;

    for(int i=100;i<=200;i++){
        if(i%9==0){
            printf("%d ",i);
            sum=sum+i;
        }
    }
    printf("\n");

    printf("Sum = %d\n",sum);

    return 0;
}