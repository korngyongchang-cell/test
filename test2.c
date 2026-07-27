#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to get random number
int getRandomInRange(int min, int max) {
    return min + rand() % (max - min + 1);
}

// Functions
int attack() {
    return getRandomInRange(5, 12);
}

int heal() {
    return getRandomInRange(8, 15);
}

int specialAttack() {
    return getRandomInRange(8, 25);
}

int monsterAttack() {
    return getRandomInRange(8, 12);
}

void printStatus(int knightLife, int monsterLife) {
    printf("Knight HP: %d\n", knightLife);
    printf("Monster HP: %d\n", monsterLife);
    printf("------------------------------\n");
}

void printRoundLog(char action, int value, int monsterDmg) {
    if (action == 'A') {
        printf("You attacked the monster and dealt %d damage.\n", value);
    } else if (action == 'H') {
        printf("You healed yourself for %d points.\n", value);
    } else if (action == 'S') {
        printf("You used SPECIAL ATTACK and dealt %d damage!\n", value);
    }
    printf("The monster attacked and dealt %d damage.\n", monsterDmg);
}

// Main
int main() {
    srand(time(NULL));

    int knightLife = 40;
    int monsterLife = 40;
    int turn = 1;
    char choice;

    while (knightLife > 0 && monsterLife > 0) {

        printf("\n--- Round %d ---\n", turn);
        printf("Choose your action: (A)ttack, (H)eal, (S)pecial Attack\n");
        printf("> ");
        scanf(" %c", &choice);

        int value = 0;

        // Knight action
        if (choice == 'A' || choice == 'a') {
            value = attack();
            monsterLife -= value;
        }
        else if (choice == 'H' || choice == 'h') {
            value = heal();
            knightLife += value;
        }
        else if ((choice == 'S' || choice == 's') && turn % 3 == 0) {
            value = specialAttack();
            monsterLife -= value;
        }
        else {
            printf("Invalid move or Special Attack not available!\n");
            continue; // skip turn
        }

        // Monster attacks (only if alive)
        int monsterDmg = 0;
        if (monsterLife > 0) {
            monsterDmg = monsterAttack();
            knightLife -= monsterDmg;
        }

        // Print round result
        printRoundLog(choice, value, monsterDmg);
        printStatus(knightLife, monsterLife);

        turn++;
    }

    // Result
    if (knightLife > 0) {
        printf(" Victory! You defeated the monster!\n");
    } else {
        printf(" You were defeated by the monster...\n");
    }

    return 0;
}