#include<stdio.h>

int main(){
    int n;

    printf("How many numbers:");
    scanf("%d",&n);
    
    int array[n];

    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int max = array[0];
    int min = array[0];

    for(int i=1;i<n;i++){
        if(max<array[i]){
            max = array[i];
        }
        if(min>array[i]){
            min = array[i];
        }
    }
    printf("Maximum number = %d\n",max);
    printf("Minimum number = %d\n",min);

    return 0;
}