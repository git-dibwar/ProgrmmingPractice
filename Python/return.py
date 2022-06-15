# base=4
# height=6
# print((base*height)/2)

#using funciton 
def area_triangle(base,height):
    print(base*height/2)
area_a=area_triangle(3,4)
print(area_a)
# area_b=area_triangle(5,6)
# sum=area_a+area_b
# print("the sum of both area is: " +str(sum))

def get_seconds(hours, minutes, seconds):
    return 3600*hours+60*minutes+seconds
amount_a=get_seconds(2,30,0)
amount_b=get_seconds(0,45,15)
result=amount_a+amount_b
print(result)

def convert(seconds):
    hours=seconds//3600
    minutes=(seconds-hours*3600)//60
    remain_seconds=(seconds-(hours*3600+minutes*60))
    return hours, minutes, remain_seconds
hours,minutes,seconds=convert(5000)
print(hours,minutes,seconds)
time=convert(5000)
print(time)