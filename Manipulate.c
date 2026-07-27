#include <stdio.h>

//         Q1

//     int countAboveThreshold(int arr[],int size,int threshold){
//         int countAboveThreshold=0;
//             for (int i=0 ;i<size;i++){
//                 if (arr[i]>=threshold){
//                     countAboveThreshold++;
//                 }
//             }
//         return countAboveThreshold;
//         }

//     int main(){
//         int C[5]={9, 8, 19, 13, 15};
//         int A[1]={14};

//         printf("%d\n",countAboveThreshold(C,5,12));
//         printf("%d\n",countAboveThreshold(A,1,14));
                
//         return 0;
//         }



//          Q2


        // void addBonus(int arr[],int size,int bonus){
        //     for (int i=0;i<size;i++){
        //         if (arr[i]<19){
        //             arr[i]+=bonus;
        //         }
        //         else if (arr[i]==20){
        //             arr[i]+=0;
        //         }else {
        //             arr[i]+=1;
        //         }
        //     }
        //     for (int i=0;i<size;i++){
        //         printf("%d ",arr[i]);
        //     }
        //     printf("\n");
        // }

        // int main(){

        //     int A[5]={ 9,  8,  19,  13,  15 };
        //     int B[3]={20, 20 , 20};

        //     addBonus(A,5,2);
        //     addBonus(B,3,5);

        //     return 0;
        // }



//              Q3


        void computeArv(int arr[],int size){
            int C=0;
            float Arv=0;
            for (int i=0 ;i<size;i++){
                C+=arr[i];
            }
            Arv=C/size;
            printf("Average score= %2.f \n",Arv);
        }

        int main(){
            int A[5]={ 10, 12, 10, 12 };
            int B[3]={20, 20 , 20};
            computeArv(A,4);
            computeArv(B,3);
        }