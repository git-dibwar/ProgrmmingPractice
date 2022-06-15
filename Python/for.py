for left in range(7):
    for right in range(left, 7):
        print("[" + str(left) + "|" + str(right) + "]", end=" ")
    print()


teams = ["Dragons", "Wolves", "Pandas", "Unicorns"]
for home_teams in teams:
    for away_teams in teams:
        if home_teams != away_teams:
            print(home_teams + " vs " + away_teams)
print()

def is_valid(user):
    return len(user)>=7

def validate_users(users):
    for user in users:
        if is_valid(user):
            print(user + " is valid")
        else:
            print(user + " is invalid")

validate_users( ['taylor', 'ldss', 'jasmaal'])