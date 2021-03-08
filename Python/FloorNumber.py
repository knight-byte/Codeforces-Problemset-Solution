def main():
    t = int(input())
    while t:
        t -= 1
        n = int(input())
        x = int(input())
        if n == 1 or n == 2:
            print(1)
        else:
            floor = 1
            while floor*x+2 < n:
                floor += 1
            print(floor+1)


if __name__ == '__main__':
    main()
