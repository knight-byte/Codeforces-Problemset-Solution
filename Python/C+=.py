def main():
    t = int(input())
    while t:
        t -= 1
        a = int(input())
        b = int(input())
        n = int(input())
        steps = 0
        while ~(a > n) and ~(b > n):
            if a > b:
                b += a
                steps += 1
            else:
                a += b
                steps += 1
            print(steps)


if __name__ == '__main__':
    main()
