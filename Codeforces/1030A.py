t = int(input())

arr = input()
arr = [int(x) for x in arr.split()]

if 1 in arr:
    print("HARD")
else:
    print("EASY")