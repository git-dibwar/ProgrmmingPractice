def hint_username(username):
    if len(username)<3:
        print('Invalid username. Must be at least 3 characters long')
    elif len(username)>15:
        print('Invalid username. Must be at most 15 characters long')
    else:
        print('Valid username')

username=input('write your username: ')
hint_username(username)