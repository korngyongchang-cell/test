#include <stdio.h>

    void compress(int input[10],int output[10]){
        int counter=input[0];
        int index=0;
        output[index]=input[0];

        for(int i=0;i<10;i++){
            if(input[i]!=input[i+1]){
                index++;
                output[index]=input[i+1];
            } 
        }
        for(int i=index;i<10;i++){
            output[i]=-1;
        }
         for(int i=0;i<10;i++){
            printf("%d ", output[i]);
        }
       

    }
    int main(){
        int input[10]={1, 1, 2, 2, 2, 3, 4, 4, 5, 5};
        int output[10];

        compress(input,output);



    }