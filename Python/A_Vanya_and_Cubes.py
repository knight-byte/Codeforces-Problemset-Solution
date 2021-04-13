def main():
    n = int(input())
    i = 0
    sum = 0
    final = 0
    while final <= n:
        i += 1
        sum += i
        final += sum

    print(i-1)


if __name__ == '__main__':
    main()
