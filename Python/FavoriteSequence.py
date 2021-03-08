def main():
    t = int(input())
    while t:
        t -= 1
        n = int(input())
        arr = [int(input()) for i in range(n)]
        sol = []
        i = 0
        j = n-1
        back = False
        while n:
            n -= 1
            if ~back:
                sol.append(arr[i])
                i += 1
                back = True
            else:
                sol.append(arr[j])
                j -= 1
                back = False
        for i in sol:
            print(x, end=" ")
        print()


if __name__ == '__main__':
    main()
