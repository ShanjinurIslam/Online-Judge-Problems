text = input()

elements = text[1:-1].split(sep=',')
elements = [ x.rstrip().lstrip() for x in elements ]

var = set()

for each in elements:
    if each is not '':
        var.add(each)

print(len(var))