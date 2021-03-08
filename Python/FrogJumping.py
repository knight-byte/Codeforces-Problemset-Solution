def main():
    t = int(input())
    while t:
        t -= 1
        a = int(input())
        b = int(input())
        k = int(input())
        pos = 0
        total = 0
        x = 0
        y = 0
        if k % 2 == 0:
            x = k/2
            y = k/2
        else:
            x = k/2+1
            y = k-x
        total = a*x-b*y
        print(total)


if __name__ == '__main__':
    main()
