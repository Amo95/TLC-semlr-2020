from collections import OrderedDict


def finalValue(age):
    emptylist = list()
    for index in range(1, age +1):
        emptylist.append(index)
    return sum(emptylist)

def format(finalValue):
    dictDate = OrderedDict({
        "days": 365,
        "hours": 24, 
        "months": 12 
        })
    


age = finalValue(int(input("How old are you? ")))
# print(age)
print(format(finalValue(age)))
