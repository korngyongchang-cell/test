#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getRandomInRange(int min, int max) {
    return min + rand() % (max - min + 1);      
}

int attack() { return getRandomInRange(5, 12); }
int heal() { return getRandomInRange(8, 15); }
int specialAttack() { return getRandomInRange(15, 25); } // Buffed slightly for rarity
int monsterAttack() { return getRandomInRange(8, 12); }

void status(int knightLife, int monsterLife) {
    printf("\n--- STATUS ---\n");
    printf("Knight HP: %d | Monster HP: %d\n", knightLife, monsterLife);
    printf("----------------\n");
}

int main() {
    srand(time(NULL));

    int knightLife = 40;
    int monsterLife = 40;
    int turn = 1;
    char choice;

    while (knightLife > 0 && monsterLife > 0) {
        printf("\nROUND %d\n", turn);
        printf("Actions: [A]ttack, [H]eal, [S]pecial (Every 3rd turn)\n");
        printf("Choice: ");
        
        // Note the space before %c to clear the newline buffer
        scanf(" %c", &choice);

        int value = 0;
        int monsterDmg = 0;
        int validTurn = 1;

        if (choice == 'A' || choice == 'a') {
            value = attack();
            monsterLife -= value;
            printf("You hit the monster for %d!\n", value);
        } 
        else if (choice == 'H' || choice == 'h') {
            value = heal();
            knightLife += value;
            if (knightLife > 40) knightLife = 40;
            printf("You healed for %d.\n", value);
        } 
        else if ((choice == 'S' || choice == 's')) {
            if (turn % 3 == 0) {
                value = specialAttack();
                monsterLife -= value;
                printf("CRITICAL HIT! You dealt %d damage!\n", value);
            } else {
                printf("Special attack isn't ready yet! You waste your opening!\n");
            }
        } else {
            printf("Invalid command! The monster lunges while you're confused!\n");
        }

        // Monster's turn
        if (monsterLife > 0) {
            monsterDmg = monsterAttack();
            knightLife -= monsterDmg;
            printf("The monster counters for %d damage.\n", monsterDmg);
        }

        status(knightLife, monsterLife);
        turn++;
    }

    if (knightLife > 0) {
        printf("\n*** VICTORY! The beast has fallen. ***\n");
    } else {
        printf("\n*** DEFEAT! You have been slain. ***\n");
    }

    return 0;
}