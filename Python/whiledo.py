x = 1
sum = 0
while x <= 5:
    sum += x
    x += 1
print(sum)  # sum=15
print(x)  # x=6
product = 1
while x < 7:
    product = product*x
    x += 1
print(sum, x, product)


def count_down(start_number):
  while (start_number > 0):
    print(start_number)
    start_number -= 1
  print("Zero!")


count_down(3)


def print_range(start, end):
    n = start
    while n <= end:
        print(n)
        n=n+1


print_range(1, 5) 

