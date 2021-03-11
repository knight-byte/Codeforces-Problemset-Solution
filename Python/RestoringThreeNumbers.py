def main():
    num = 4
    arr = []
    sol = []
    inp = int(input())
    while inp != None:
        arr.append(inp)
        inp = int(input())

    arr = sorted(arr)
    for i in arr:
        if i != arr[num-1]:
            temp = arr[num-1]-i
            sol.append(temp)
        else:
            break

    for i in sol:
        print(i, end=" ")

    if __name__ == '__main__':
        main()
