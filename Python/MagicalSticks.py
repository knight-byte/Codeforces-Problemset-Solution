def main():
    t = int(input())
    sol = []
    while t:
        n = int(input())
        if n == 1:
            sol.append(1)
        elif n % 2 == 0:
            sol.append(n/2+1)
        else:
            sol.append(n/2)
        t -= 1

    for i in sol:
        print(i)


if __name__ == '__main__':
    main()
