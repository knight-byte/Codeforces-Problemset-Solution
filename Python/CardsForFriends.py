def main():
    t = int(input())
    while t:
        t -= 1
        w = int(input())
        h = int(input())
        n = int(input())
        sheets = 1
        if w % 2 == 0:
            while w % 2 == 0:
                w /= 2
                sheets *= 2
        if h % 2 == 0:
            while h % 2 == 0:
                h /= 2
                sheets *= 2
        if sheets >= n:
            print("YES")
        else:
            print("NO")


if __name__ == '__main__':
    main()
