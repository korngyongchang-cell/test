#include <stdio.h>
#include <stdbool.h> 
bool triangle(int a,int b,int c){
    return (a*a + b*b ==c*c);
}

int main (){
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
    if (triangle(a,b,c)){
        printf("true");
    }else{
        printf("false");
    }

    return 0;
}