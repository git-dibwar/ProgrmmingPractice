def square(n):
    return n*n

def sum_squares(x):
    sum = 0
    for n in range(x):
        sum+=square(n)
    return sum
#for loop can itterate a loop which the user already knows about
n=int(input('Enter a number: '))
print(sum_squares(n))


