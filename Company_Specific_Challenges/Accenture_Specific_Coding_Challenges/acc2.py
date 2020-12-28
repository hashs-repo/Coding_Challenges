def func(str1):
    temp = None
    for i in range(len(str1)):
        if(i == 1):
            if(str1[i] == 'A'):
                temp = int(str1[0]) & int(str1[i+1])
            elif(str1[i] == 'B'):
                temp = int(str1[0]) | int(str1[i+1])
            elif(str1[i] == 'C'):
                temp = int(str1[0]) ^ int(str1[i+1])

        elif(str1[i] == 'A'):
            temp = temp & int(str1[i+1])
        elif(str1[i] == 'B'):
            temp = temp | int(str1[i+1])
        elif(str1[i] == 'C'):
            temp = temp ^ int(str1[i+1])
    return temp


str1 = "0C1A1B1C1C1B0A0"
print(func(str1))
