#include <stdio.h>

int main() {
    int h1, m1, s1, h2, m2, s2;
    
    printf("enter h1: "); scanf("%d", &h1);
    printf("enter m1: "); scanf("%d", &m1);
    printf("enter s1: "); scanf("%d", &s1);
    
    printf("enter h2: "); scanf("%d", &h2);
    printf("enter m2: "); scanf("%d", &m2);
    printf("enter s2: "); scanf("%d", &s2);

    int total_seconds1 = (h1 * 3600) + (m1 * 60) + s1;
    int total_seconds2 = (h2 * 3600) + (m2 * 60) + s2;

    if (total_seconds1 > total_seconds2) {
        printf("Time 1 is greater!");
    } else if (total_seconds1 < total_seconds2) {
        printf("Time 2 is greater!");
    } else {
        printf("Both times are the same!");
    }

    return 0;
}