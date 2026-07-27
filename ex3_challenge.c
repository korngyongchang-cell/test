#include <stdio.h>

int main(){

    int HP=50; 
    char road[10]={'L', 'S', 'S', 'L', 'L', 'L', 'L', '*', '*', '*'};
   
    for (int i = 0; i < 10; i++){
        if (road[i]=='L' && HP>0){
            HP-=10;
        }
        if (HP<=0){
            printf("%d",i);
            break;
        }
        if (road[i]=='W' && HP>0){
            HP+=20;
        }
        if (road[i]=='S'){
            i++;
        }
        if (road[i]=='*'){
            HP+=0;
        }
        
    }
    if (HP>0){
        printf ("Mission won");
    }

    return 0;
}

