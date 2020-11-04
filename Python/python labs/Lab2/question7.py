def fibonacci(number):
    if type(number) != int:
        raise TypeError("Number must be an integer value")
    if number < 1:
        raise ValueError("Number must be a positive value")

    if number == 1 or number == 2:
        return 1
    if number > 2:
        return fibonacci(number-1) + fibonacci(number-2)

number = int(input("Enter value: "))
for index in range(1,number+1):
    print(fibonacci(index))