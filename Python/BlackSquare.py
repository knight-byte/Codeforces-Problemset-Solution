def main():
    length = 4
    arr = [int(input()) for i in range(length)]
    s = input()
    tot = 0
    for i in s:
        is = ord(i)-ord("0")
        tot += arr[ is -1]
    print(tot)


if __name__ == '__main__':
    main()
