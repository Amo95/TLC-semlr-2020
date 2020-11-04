import random as rand

def Guess(guessedNumber, systemNumber):
    while True:
        if guessedNumber == systemNumber:
            return "You guessed right! - {}:{}".format(guessedNumber, systemNumber)
        else:
            print("You guessed wrong")
            prompt()


def prompt():
    try:
        randomNumber = rand.randint(0,10)
        guessNumber = int(input("Guess a number between 0-10: "))
        print(Guess(guessNumber, randomNumber))
    except ValueError as val:
        print("Enter a number!!!!!")
        prompt()

try:
    prompt()
except (EOFError,KeyboardInterrupt): 
    print("Thanks for using this code")
    
