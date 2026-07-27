#include <stdio.h>
int main(){
    int count =0;
    int arr[5];
    printf("enter your number: ");
    for (int i=0 ;i<5 ;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<5;i++){
        if (arr[i]%2==0){
            count++;
        }
    }
    printf("even number: %d",count);


    return 0;
}