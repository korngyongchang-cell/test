// #include <stdio.h>
// #include <stdbool.h>
// bool isShieldStrong(int strength) {
// if (strength>=50){
//     return true;
// }else{
//     return false;
// }
// }

// int main() {
//     int shield = 45;
//     if (isShieldStrong(shield)) {
//         printf("Shield is strong enough!\n");
//     } else {
//         printf("The shield might break!\n");
//     }
//     return 0;
// }

// #include <stdio.h>
//  ===== CodeRunner template to boost autocomplete =====
// printf, scanf





// int indexOfZero(int numbers[10]) {
//     // TODO
//     for (int i=0 ;i<10 ;i++){
//         if (numbers[i]==0){
//             return i;
//             break;        
//         }
//     }
//     return -1;
// }

// int main() {
//     int numbers[10];
//     for(int i=0;i<10;i++) scanf("%d",&numbers[i]);

//     printf("%d", indexOfZero(numbers));
//     return 0;
// }





//  ===== CodeRunner template to boost autocomplete =====
// printf, scanf
 #include <stdio.h>
#include <stdbool.h>

int countChar(char arr[5], char target) {
    // TODO
    for(int i=0; i<5;i++){
        if (arr[i]=='A'){
            return 1;
        }
    }
}

bool moreAthanB(char arr[5]) {
    // TODO
    if(countChar==3){
        return true;
    }else{
        return false;
    }
}

int main() {
    char arr[5];
    for(int i=0;i<5;i++) scanf(" %c",&arr[i]);

    printf("%d", moreAthanB(arr));
}