#include <stdio.h>

    void swap(int* x,int* y){
        int value=*x;
        *x = *y;
        *y = value;
    }

    int main(){
        int x=10;
        int y=20;
        printf("%d %p\n",x,&x);
        printf("%d %p\n",y,&y);

        swap(&x,&y);
        int* ptrx=&x;
        int* ptry=&y;
        int* temp;
        temp = ptrx;
        ptrx=ptry;
        ptry=temp;

        printf("%d %p\n",x,&x);
        printf("%d %p\n",y,&y);
        return 0;
    }