def main():
    q = int(input())
    for i in range(q):
        temp = int(input())
        if temp == 2:
            print(2)
        elif temp % 2 == 1:
            print(1)
        elif temp % 2 == 0:
            print(0)


if __name__ == '__main__':
    main()
