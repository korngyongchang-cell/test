#include <stdio.h>
void resolvebattle(int startline[10],int endline[10]){
    // for (int i=0;i<9;i++){
    //     if(startline[i]==1 && startline[i+1]==2){
    //         startline[i]=0;
    //         startline[i+1]=0;
    //     }
    // }
    // for (int i=0;i<9;i++){
    //     if(startline[i]==2 && startline[i+1]==1){
    //         startline[i]=0;
    //         startline[i+1]=0;
    //     }
    // }
    //     for (int i=0;i<10;i++){
    //         endline[i]=startline[i];    
    // }
    for(int i=0;i<10;i++){
        if(startline[i]+startline[i+1]==3){
            startline[i]=0;
            startline[i+1]=0;
        }
        endline[i]=startline[i];
    }
}



int main(){
    int startline[10]={1,2,0,1,1,2,0,2,1,0};
    int endline[10];
    resolvebattle(startline,endline);

    for (int i=0;i<10;i++){
        printf("%d ",endline[i]);
    }
    return 0;
}