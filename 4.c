#include<stdio.h>

int main(){
    int n;

    printf("How many numbers:");
    scanf("%d",&n);
    
    int array[n],array2[n];

    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    for(int i=0;i<n;i++){
        array2[i]=array[i];
        printf("%d\t",array2[i]);
    }

    return 0;
}