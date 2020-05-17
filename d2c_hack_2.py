# Enter your code here. Read input from STDIN. Print output to STDOUT
a, b, c = map(int, input().split())
temp3 = c
count = 0
if temp3 > 0:
    for i in range(temp3):
        c = c - 1
        count = count + 1
        if b != 0:
            b = b - 1
            count = count + 1
        elif a != 0:
            a = a - 1
        else:
            break
else:
    while b > 0:
        b = b - 1
        count = count + 1
    while a > 0:
        a = a - 1
print(count)
