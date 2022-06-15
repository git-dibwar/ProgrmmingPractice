def is_power_of_two(n):
    if (n==0):
        return False
      # Check if the number can be divided by two without a remainder
    while n==1 or  n % 2 == 0:
        n = n / 2
  # If after dividing by two the number is 1, it's a power of two
        return True
    return False
  
  

n=int(input('enter the number: '))
print(is_power_of_two(n))