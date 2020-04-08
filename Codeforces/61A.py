str1 = input()
str2 = input()

strlen = len(str1)

out = ''
for i in range(strlen):
    if str1[i]!=str2[i]:
        out += '1'
    else:
        out += '0'

print(out)