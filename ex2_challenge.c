#include <stdio.h>

int main(){

    int arr[5];
    printf("enter numbers: ");
    for (int i=0 ;i<5; i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for (int i=0 ;i<5; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for (int i=0;i<5;i++){
        if (arr[i]<0){
            arr[i]=max;
        }
    }
    for (int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }      


    return 0;
}