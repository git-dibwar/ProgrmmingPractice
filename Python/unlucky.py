def lucky_number(name):
      number = len(name) * 9
      number= ("Hello " + name + ". Your lucky number is " + str(number)) #using statement as a equation
      return number
	    
print(lucky_number("Kay"))
print(lucky_number("Cameron"))