/*Snake and Ladder game using recursion*/
#include <iostream>
using namespace std;

void player(int position) 
{
    int dice;

    if (position >= 16) 
    {
        cout << "....Congratulations! You've reached position 16 and won!....\n";
        return;
    }

    cout << "You are currently at position " << position << endl;
    cout << "Enter a number between 1-6: ";
    cin >> dice;

    if (dice < 1 || dice > 6) 
    {
        cout << "Invalid roll. Try again.\n";
        player(position); 
        return;
    }

    position += dice;

    switch (position) 
    {
        case 7:
            position = 14; 
            cout << "Ladder! Moving to 14th position\n";
            break;
        case 10:
            position = 2;  
            cout << "Snake! Moving back to 2nd position\n";
            break;
        default:
            break;
    }

    player(position);
}

int main() 
{
    cout << "....Snake and Ladder game with the board size of 16....\n";
    player(0);

    return 0;
}
