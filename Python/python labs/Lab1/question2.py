#question two

def oddEvenChecker(number):
    if number%2 == 0:
        return "You entered an even number"
    else:
        return "You entered an odd number"

try:
    enter = oddEvenChecker(int(input("Enter number: ")))
    print(enter)
except ValueError as val:
    print("Enter a decimal integer/value!! ")
    
