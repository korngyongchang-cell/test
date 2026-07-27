#include<stdio.h>
int main (){
char arr[10]= {'A','B','C','A','B','C','A','B','C','B'} ;
int count=0;
for (int i=0; i<9 ;i++){
    if (arr[i]=='A' && arr[i+1]=='B' && arr[i+2]=='C'){
        count++;
    }
}
printf("%d", count);


    return 0;
}
