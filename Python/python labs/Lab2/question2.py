myName = "James Amo"
myAge = 25

try:
    name_and_age = myName + myAge # TypeError - cannot concatenate str to int
    name_and_age = myName, myAge # works with either tuple/list/dict/ordereddict or
    name_and_age = myName + str(myAge) # typcast the int value to string

    print(name_and_age)
except TypeError as t:
    print("Only concatenate string to string")