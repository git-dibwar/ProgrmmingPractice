friends=['taylor','ram','sing']
for friend in friends:
    print('Hi'+' '+friend)
    

values=[23,245,543,23,64]
sum=0
length=0
for value in values:
    sum+=value
    length+=1
print('total sum: '+str(sum)+'-average: '+str(sum/length))


for x in range(1,5):
    print(x)

def fact(n):
    product=1
    for n in range(1,n+1):
        product*=n
    return product
print(int(fact(4)))


        