def moveValue(lists):
    lists.insert(0,lists.pop())
    return lists

lists = [number for number in range(10)]
print(moveValue(lists))
