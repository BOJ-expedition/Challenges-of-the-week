
n = int(input())
empty_list = []

for j in range(0,n):
    a = input()
    arr = a.split(" ")
    b = len(a)
    num = float(arr[0])
    st = ''

    for k in range(0,len(arr)):
        st += arr[k]

    for i in range(1,len(st)):
        if st[i] == '@':
            num *= 3
        elif st[i] == '%':
            num += 5
        elif st[i] == '#':
            num -= 7
        else:
            continue

    empty_list.append(num)

for i in range(0,n):
    print('%.2f' % empty_list[i])
