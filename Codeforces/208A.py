text = input()

arr = text.split(sep='WUB')
arr = list(filter(lambda a: a != '', arr))

for each in arr:
    print(each,end=" ")