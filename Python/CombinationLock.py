def main():
    n = int(input())
    s1 = input()
    s2 = input()
    steps = 0
    for i in range(n):
        i1 = ord(s1[i])-ord("0")
        i2 = ord(s2[i])-ord("0")
        dif = abs(i1-i2)
        if dif < 5:
            steps += dif
        else:
            steps += (10-dif)
    print(steps)


if __name__ == '__main__':
    main()
