#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int getRandomInRange(int min, int max) {
    return min + rand() % (max - min + 1);		
}
int attack(){
    return getRandomInRange(5,12);
}
int heal(){
    return getRandomInRange(8,15);
}
int specialAttack(){
    return getRandomInRange(8,25);
}
int monsterAttack(){
    return getRandomInRange(8,12);
}
void status(int knightLife, int monsterLife){
    printf("knightLife: %d\n",knightLife);
    printf("monsterLife: %d\n",monsterLife);
    printf("------------------------------\n");
}
void roundLog(char action ,int value, int monsterDmg ){
    if (action == 'A') {
        printf("You attacked the monster and dealt %d damage.\n", value);
    } else if (action == 'H') {
        printf("You healed yourself for %d health.\n", value);
    } else if (action == 'S') {
        printf("You used special attack and dealt %d damage!\n", value);
    }
    printf("The monster attacked and dealt %d damage.\n", monsterDmg);
}

int main(){
    srand(time(NULL));

    int knightLife = 40;
    int monsterLife = 40;
    int turn = 1;
    char choice;


    while (knightLife > 0 && monsterLife > 0) {

        printf("\n---Round %d---\n", turn);
        printf("Choose your action: (A)ttack, (H)eal, (S)pecial Attack\n");
        scanf(" %c",&choice);

        int value = 0;
        if (choice=='A'){
            value=attack();
            monsterLife-=value;
        }
        else if(choice=='H'){
            value=heal();
            knightLife+=value;
        }
        else if(choice=='S' ){
            if (turn%3==0){
            value=specialAttack();
            monsterLife-=value;
            }else{
            printf("special attack not available !\n");
            continue;
            }
        }else {
            printf("Invalid input! Please use A, H, or S.\n");
            continue;
        }


        int monsterDmg = 0;
        if (monsterLife > 0) {
            monsterDmg = monsterAttack();
            knightLife -= monsterDmg;
        }

        roundLog(choice,value,monsterDmg);
        status(knightLife, monsterLife);


        turn++;

    }
        if (knightLife > 0) {
        printf(" Victory! You defeated the monster!\n");
    } else {
        printf(" You were defeated by the monster...\n");
    }

    return 0;
}
