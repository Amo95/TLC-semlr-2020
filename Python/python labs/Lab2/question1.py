def evenOrOdd(number):
    if number%2 == 0:
        return "{} is an Even number".format(number)
    else:
        return "{} is an Odd number".format(number)

enteredNumber = evenOrOdd(int(input("Enter value: ")))
print(enteredNumber)