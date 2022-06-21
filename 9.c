#include<stdio.h>

int main(){
    int n;
    printf("How many Numbers: ");
    scanf("%d",&n);

    int a[n],odd[n],even[n];

    printf("Enter integer numbers: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int j=0,k=0;

    for(int i=0;i<n;i++){
        if(a[i]%2 == 0){
            even[j] = a[i];
            j++;
        }
        if(a[i]%2 != 0){
            odd[k] = a[i];
            k++;
        }
    }

    printf("Even numbers: ");
    for(int i=0;i<j;i++){
        printf("%d ",even[i]);
    }
    printf("\n");

    printf("Odd numbers: ");
    for(int i=0;i<k;i++){
        printf("%d ",odd[i]);
    }
    printf("\n");

    return 0;
}