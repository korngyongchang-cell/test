#include <stdio.h>
#include <stdbool.h>

bool isShieldStrong(int shield) {
    return (shield>=50);
}

int findmaxTreasures(int t1, int t2, int t3){
    return (t1>t2 && t1>t3)?t1:(t2>t1 && t2>t3)?t2:t3;
}

int max(int a, int b) {
    return (a>b)?a:b;
}




int main() {
    int shield=35;

    (isShieldStrong(shield))?printf("Shield is strong enough!\n"):printf("The shield might break!\n"); //ternary style 
    
    int biggest = findMaxTreasure(60, 80, 40);
    printf("Largest treasure: %d gold\n", biggest);

    return 0;
}
