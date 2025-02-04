"""
Operand Syntax

"""

x = 5
y = 2

#Tambah
print ("Tambah" , x+y)

#Kurang
print ("Kurang" , x-y)

#Kali
print ("Kali" , x*y)

#Bagi
print ("Bagi" , x/y)

#Sisa Bagi
print ("Sisa Bagi" , x%y)


"""
Function Definition
"""

def keliling(x,y):
    print (x+y)

keliling(5,6)

#manny input
def many_input(*kid):
    print(kid[2])

many_input(1,2,3,4,5)

#Arbitrary Keyword Arguments

def my_function(**kid):
  print("His last name is " + kid["lname"])

my_function(fname = "Tobias", lname = "Refsnes")


#default Parameters

def my_function(country = "Norway"):
  print("I am from " + country)

my_function("Sweden")
my_function("India")
my_function()
my_function("Brazil")

"""
Loop in Python

"""

#For

fruits = ["apple", "banana", "cherry"]
for x in fruits:
    print (x)


String = "Aku Suka Kamu"
for x in String:
    print (x)

# While

counter = 0
while counter <=10:
    print (counter)
    counter = counter + 1