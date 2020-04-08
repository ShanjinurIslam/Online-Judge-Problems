k = int(input())
l = int(input())
m = int(input())
n = int(input())
d = int(input())

arr = list(range(1,d+1))
arr = list(filter(lambda a: a%k!=0, arr))
arr = list(filter(lambda a: a%l!=0, arr))
arr = list(filter(lambda a: a%m!=0, arr))
arr = list(filter(lambda a: a%n!=0, arr))

print(d-len(arr))