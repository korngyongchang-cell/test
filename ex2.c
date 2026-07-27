#include<stdio.h>
int main (){
char arr1[5];
char arr2[5];
int countA=0,countB=0,countC=0,countA2=0,countB2=0,countC2=0; 
printf("enter latter to array:");
for (int i=0 ;i<10 ;i++){
    scanf("%c", &arr1[i]);
    scanf("%c", &arr1[i]);
}
for (int i=0 ;i<5 ; i++){
    if(arr1[i]=='A'){
        countA++;
    }
        if(arr1[i]=='B'){
        countB++;
    }
        if(arr1[i]=='C'){
        countC++;
    }
       if(arr2[i]=='A'){
        countA2++;
    }
        if(arr2[i]=='B'){
        countB2++;
    }
        if(arr2[i]=='C'){
        countC2++;
    }
}
if (countA==countA2 && countB==countB2 && countC==countC2){
    printf("the same");
}else{
    printf("different");
}
     




    return 0;
}
