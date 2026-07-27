#include<stdio.h>
int main (){
char arr[10]= {'A','B','C','A','C','B','B','B','A','C'} ;
int count=0;
for (int i=0; i<9 ;i++){
    if (arr[i]=='A' && arr[i+1]=='B'){
        count++;
    }
}
printf("%d", count);


    return 0;
}
