#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// rock vs scissors = rock
// paper vs scissors = scissors
// paper vs rock = paper

void Prize(int n)
{

    if (n == 1)
    {
        printf(
            "\n________\\/_______ \n|               |\n|               |\n|  Match Tie... |\n|               |\n|_______________|"

        );
    }
    else if (n == 2)
    {
        printf(
            "\n________\\/_______ \n|               |\n|               |\n|Computer Winner|\n|               |\n|_______________|"

        );
    }
    else if (n == 3)
    {
        printf(
            "\n________\\/_______ \n|               |\n|               |\n|   You Winner  |\n|               |\n|_______________|"

        );
    }
}

int randomNumber()
{

    srand(time(NULL));
    return rand() % 3 + 1;
}

void RPSGame()
{
    printf("\n*****  Welcome in RPSGame  *****\n");
    char player[8];
    printf("\nEnter Your Name : ");
    scanf("%s", &player);

    int t1 = 0; // for You
    int t2 = 0; // for Computer

    int i = 1;
    do
    {
        int n;
        int computer = randomNumber();
        printf("\n\nRound %d\n", i);
        printf("1.Rock  2.Paper  3.Scissors \n");
        printf("%s's tern : ", player);
        scanf("%d", &n);

        if (n == computer)
        {
            printf("Tie...");
            t1++;
            t2++;
        }
        else if (n == 1 && computer == 2)
        {
            printf("Rock vs Paper = Paper\n");
            t2 = t2 + 2;
        }
        else if (n == 2 && computer == 1)
        {
            printf("Paper vs Rock = Paper\n");
            t1 = t1 + 2;
        }
        else if (n == 2 && computer == 3)
        {
            printf("Paper vs Scissors = Scissors\n");
            t2 = t2 + 2;
        }
        else if (n == 3 && computer == 2)
        {
            printf("Scissors vs Paper = Scissors\n");
            t1 = t1 + 2;
        }
        else if (n == 1 && computer == 3)
        {
            printf("Rock vs Scissors = Rock\n");
            t1 = t1 + 2;
        }
        else if (n == 3 && computer == 1)
        {
            printf("Scissors vs Rock = Rock\n");
            t2 = t2 + 2;
        }

        i++;

    } while (i <= 3);

    if (t1 == t2)
    {
        printf("\nYour Score : %d \nComputer Score : %d \n", t1, t2);
        printf("Match Tie...\n");
        Prize(1);
    }
    else if (t1 > t2)
    {
        printf("\nYour Score : %d \nComputer Score : %d \n", t1, t2);
        printf("You Match Won\n");
        Prize(3);
    }
    else if (t1 < t2)
    {
        printf("\nYour Score : %d \nComputer Score : %d \n", t1, t2);
        printf("Computer Match Won\n");
        Prize(2);
    }
}

int main()
{
    RPSGame();

    return 0;
}