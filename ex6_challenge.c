#include <stdio.h>

int main(){

    int arr[10]={1, 3, 9, 2, 1, 4, 9, 5, 6, 1};
    int count1=0; 
    int count9=0;
    int store[10];
    int count=0;
    for (int i=0;i<10;i++){
        if (arr[i]==1){
            count1++;
        }
        if (arr[i]==9){
            count9++;
        }
        if (arr[i]!=1 && arr[i]!=9){
            store[count]=arr[i];
            count++;
            
        }
    }

    for (int j=0 ;j<count1;j++){
        printf ("1 ");
    }
    for (int j=0 ;j<count;j++){
        printf("%d ",store[j]);
    }
    for (int j=0 ;j<count9;j++){
        printf("9 ");
    }


    return 0;
}