#snake and ladders game using recusrion
def player(position):
    if position >= 16:
        print("....Congratulations! You've reached position 16 and won!....")
        return

    print(f"You are currently at position {position}")
    try:

        dice = int(input("Enter a number between 1-6: "))
        if dice < 1 or dice > 6:
            print("Invalid roll. Try again.")
            player(position)
            return
            
    except ValueError:
        print("Invalid input. Please enter a number between 1-6.")
        player(position)
        return

    position += dice

    if position == 7:
        position = 14
        print("Ladder! Moving to 14th position")
    elif position == 10:
        position = 2
        print("Snake! Moving back to 2nd position")

    player(position)

def main():
    print("....Snake and Ladder game with the board size of 16....")
    player(0)

if __name__ == "__main__":
    main()
