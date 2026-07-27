// #include <stdio.h>
// #include <stdbool.h>

// bool isValidTriangle(int s1, int s2, int s3) {
//     // TODO
//     return (s1 + s2 > s3) && (s1 + s3 > s2) && (s2 + s3 > s1);
// }


// int main() {
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);
//     printf("%d", isValidTriangle(a,b,c));
// }








//  ===== CodeRunner template to boost autocomplete =====
// printf, scanf
#include <stdio.h>

     char GradeValue(int scores) {
        // TODO

            if (scores >=90) {
                return 'A' ;
            }
            else if (scores >=70) {
                return 'B';
            }
            else if (scores >=50) {
                return 'C';
            }
                return 'F';
        
        
    }
    void printAllGrade(int scores[5]){
        for (int i=0; i<5;i++){
            printf("%c ",GradeValue(scores[i]));
        }
    }
            

int main() {
    int scores[5];
    for(int i=0;i<5;i++){
         scanf("%d",&scores[i]);
    }

    // TODO call printAllGrades with the score
    printAllGrade(scores );
}