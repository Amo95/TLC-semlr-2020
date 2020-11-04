name = "James"
print(name[-1])

lists = list()
for character in name:
    lists.append(character)

print(":".join(lists))


# emptyList = list()

# for number in range(10):
#     enterNumber = int(input("Enter number: "))
#     if enterNumber >= 1 and enterNumber <= 8:
#         emptyList.append(enterNumber)
#     else:
#         print("Enter values between 1 and 8")

# print(emptyList.count(5))

# lists = [number for number in [1,4,9,16,25] if number%2 != 0]
# print(lists)




# def moveElement(lists):
#     pass

# lists = [1,2,5,4,5,6]
# lists.insert(0, lists.pop())
# print(lists)





age = 5
count = 0
lists = list()
while count < 10:
    count += 1
    lists.append(count)

print(sum(lists))