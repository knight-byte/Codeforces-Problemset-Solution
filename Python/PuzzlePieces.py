def main():
    t = int(input())
    while t:
        t -= 1
        n = int(input())
        m = int(input())
        if n == 1 or m == 1:
            print("YES")
        elif n == 2 and m == 2:
            print("YES")
        else:
            print("NO")


if __name__ == '__main__':
    main()
