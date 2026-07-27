#include<stdio.h>
void logF(int* array){
    for (int i = 0; i < 10; i++){
        printf("Value= %d (Address: %p)\n", *(array+i),&array+i );
    }
}
int main(){
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    logF(array);
    return 0;
}