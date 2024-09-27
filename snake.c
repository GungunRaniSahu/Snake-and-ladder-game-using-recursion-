/*Snake and ladder game using recursion*/
#include <stdio.h>
void player(int position) 
{
    int dice;

    if (position >= 16)
    {
        printf("....Congratulations! You've reached position 16 and won!....\n");
        return;
    }

    printf("You are currently at %d position \n", position);
    printf("Enter a number between 1-6\n");
    scanf("%d", &dice);

    if (dice < 1 || dice > 6)
    {
        printf("Invalid roll. Try again.\n");
        player(position); 
        return;
    }

    position += dice;


    switch (position) 
    {
        case 7:
            position = 14; 
            printf("Moving to 14th position\n");
            break;
        case 10:
            position = 2;  
            printf("Moving back to 2nd position\n");
            break;
        default:
            break;
    }

    player(position);
}

int main() 
{
    printf("....Snake and ladder game with the board size of 16....\n");
    player(0);

    return 0;
}
