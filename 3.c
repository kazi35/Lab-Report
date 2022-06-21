#include<stdio.h>

int main(){
    int array[5]={2,6,4,8,5};
    int sum=0;

    for(int i=0;i<5;i++){
        sum=sum+array[i];
    }
    printf("%d\n",sum);

    return 0;
}