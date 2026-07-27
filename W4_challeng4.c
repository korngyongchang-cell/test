#include<stdio.h>
   char getstatus(char delay){
        return (delay<=5)?'O':(delay<=20)?'W':'C';
   } 
   void computeStatus(int delay[10],char status[10]){
        for (int i=0;i<10;i++){
            status[i]=getstatus(delay[i]);
        }
   }


    int main() {
        int delay[10]={2,10,25,5,18,30,1,0,22,7};
        char status[10];
        
        computeStatus(delay,status);
        for (int i=0;i<10;i++){
            printf (" %c",status[i]);

        }
      

    return 0;
}