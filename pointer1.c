#include <stdio.h>
void log_function(int* arr){
    for(int i=0;i<5;i++){
        printf("%d %p \n",*(arr+i), arr+i);
    }

}

int main(){
    int arr[5]={1,2,3,4,5};
    log_function(arr);

        return 0;
    }