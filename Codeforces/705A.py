t = int(input())

out = ''

for i in range(1,t+1):
    if i==t and i%2==0:
        out += 'I love it'
    elif i!=t and i%2==0:
        out += 'I love that'
    elif i==t and i%2!=0:
        out += 'I hate it'
    else:
        out += 'I hate that'
    out += ' '

print(out)
    
        