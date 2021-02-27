def main():
    t = int(input())
    while t:
        n = int(input())
        a, b = 0, 0
        for i in range(n):
            x = int(input())
            if x % 2 != i % 2:
                if i % 2 == 0:
                    a += 1
                else:
                    b += 1
        if a != b:
            print(-1)
        else:
            print(a)
        t -= 1


if __name__ == "__main__":
    main()
