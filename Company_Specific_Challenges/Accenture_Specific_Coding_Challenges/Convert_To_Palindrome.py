string = input()
n = len(string)
res = []
for i in string:
    if(i != string[n-1]):
        res.append(i)
    else:
        break
if(len(res) == 0):
    print("NULL")
else:
    res.reverse()
    for i in res:
        print(i, end="")
