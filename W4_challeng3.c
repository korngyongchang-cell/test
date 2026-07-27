#include<stdio.h>
void computeArv(double score[10],char countries[10],double Arv[3]){

    double sumA=0 ,sumB=0,sumC=0;
    int countA=0,countB=0,countC=0;
    for (int i=0;i<10;i++){
        if (countries[i]=='A'){
            countA++;
            sumA+=score[i];
        }
        else if (countries[i]=='B'){
            countB++;
            sumB+=score[i];
        }
        else{
            countC++;
            sumC+=score[i];
        }
    }
    Arv[0] = (countA > 0) ? sumA / countA : 0;
    Arv[1] = (countB > 0) ? sumB / countB : 0;
    Arv[2] = (countC > 0) ? sumC / countC : 0;

}





    int main(){
        double score[10]={10,12,8,14,16,9,11,13,15,7};
        char countries[10]={'A','B','A','C','B','A','C','B','A','C'};
        double Arv[3]; 
        computeArv(score,countries,Arv);
        for (int i=0;i<3;i++){
            printf("%.1lf ",Arv[i]);
        }
        return 0;
    }