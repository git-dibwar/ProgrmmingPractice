#declaring a sentance
sentance="Hello, my name is Sagarika Sarma."

#declaring a list
list=sentance.split()
print(list) #['Hello,', 'my', 'name', 'is', 'Sagarika', 'Sarma.']

#adding new element in the list
#append will add at the element at the end
list.append("Hi, Dibwarjeet")
print(list) #['Hello,', 'my', 'name', 'is', 'Sagarika', 'Sarma.', 'Hi, Dibwarjeet']

list.insert(6,"Hello")
print(list) #['Hello,', 'my', 'name', 'is', 'Sagarika', 'Sarma.', 'Hello', 'Hi, Dibwarjeet']
