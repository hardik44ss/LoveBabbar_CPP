import random

options = ['r', 'p', 's']

def get_result(user_choice, comp_choice):
    if user_choice == comp_choice:
        return 'It\'s a tie!'
    elif (user_choice == 'r' and comp_choice == 's') or (user_choice == 's' and comp_choice == 'p') or (user_choice == 'p' and comp_choice == 'r'):
        return 'You win!'
    else:
        return 'You lose!'

def play_game():
    user = input('Enter your choice (r for rock, p for paper, s for scissors): ')
    computer = random.choice(options)
    print(f'Computer chose: {computer}')
    print(get_result(user, computer))

play_game()