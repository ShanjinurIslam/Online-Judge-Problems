t = 0  # number of cases

def output(ins):
    forward = []
    current = ['http://www.lightoj.com/']

    for each in ins:
        arr = each.split()
        if(arr[0] == 'VISIT'):
            forward = []
            print(arr[1])
            current.append(arr[1])
        elif(arr[0] == 'BACK'):
            if(len(current) > 1):
                forward.append(current.pop())
                print(current[-1])
            else:
                print('Ignored')
        elif(arr[0] == 'FORWARD'):
            if(len(forward) >= 1):
                current.append(forward.pop())
                print(current[-1])
            else:
                print('Ignored')
        else:
            pass

t = int(input())

for i in range(1, t+1):
    ins = []
    while(True):
        comm = input()
        ins.append(comm)
        if(comm == 'QUIT'):
            break
    ins = list(filter(lambda a: a != '', ins))
    print(f'Case {i}:')
    output(ins)
