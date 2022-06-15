from calendar import monthrange


name="Key"
number=len(name)*9
print("Hello "+name+". Your lucky number is "+ str(number))

#using funciton
def luck(name):
    number=len(name)*9 #len accepts only char value
    print("Hello "+name+". Your lucky number is "+ str(number))

luck("key")

# REPLACE THIS STARTER CODE WITH YOUR FUNCTION

# def month_days(month,month_int):
#    days=monthrange(2021,month_int)
#    print(month+" has " + str(days) + " days.")
   
# month_days('january',1)
def month_days(month,days):
    print(month + " has " + days + " days.")
month_days("June","30")
month_days("July","31")

def calculate(d):
    q=3.14
    z=q*(d**2)
    print(z)
calculate(5)

