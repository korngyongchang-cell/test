#include<stdio.h>
int main(){

    int arr[10]={5, 6, 7, 8, 9, 9, 8, 7, 6, 5};
    int count=0;
    for (int i=0;i<5;i++){
        if (arr[i]==arr[9-i]){
            count++;
        }
    }
        (count==5)?printf("perfect palindrome!"):(count==4)?printf("1 mistake palindrome!"):printf("not palindrome!");
    
    return 0;
}