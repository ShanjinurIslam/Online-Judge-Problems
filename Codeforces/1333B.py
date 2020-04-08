t = int(input())

for i in range(t):
    n = int(input())
    a = list([int(x) for x in input().split()])
    prev = [set()]
    for i in range(1,n):
        s = set()
        s.add(a[i-1])
        s = s.union(prev[i-1])
        prev.append(s)
    b = list([int(x) for x in input().split()])

    if(a[0]!=b[0]):
        print("NO")
        break
    
    flag = True 

    for j in range(1,n):
        if a[j] != b[j]:
            diff = b[j]-a[j]
            if diff>0:
                if(1 in prev[j]):
                    continue
                else:
                    print("NO")
                    flag = False
                    break
            if diff<0:
                if(-1 in prev[j]):
                    continue
                else:
                    print("NO")
                    flag = False
                    break
    if(flag):
        print("YES")
