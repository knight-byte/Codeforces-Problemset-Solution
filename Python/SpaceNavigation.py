def main():
    t = int(input())
    while t:
        t -= 1
        x = int(input())
        y = int(input())
        s = input()
        u = s.count("U")
        d = s.count("D")
        r = s.count("R")
        l = len(s)-u-d-r
        if (x > 0 and r >= x):
            x = 0
        if (x < 0 and l >= -x):
            x = 0
        if (y > 0 and u >= y):
            y = 0
        if (y < 0 and d >= -y):
            y = 0
        if ~x and ~y:
            print("YES")
        else:
            print("NO")


if __name__ == '__main__':
    main()
