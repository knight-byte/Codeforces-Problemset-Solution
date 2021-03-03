def main():
    t = int(input())
    while t:
        total = 0
        for i in range(3):
            total += int(input())
        print(total/2)
        t -= 1


if __name__ == '__main__':
    main()
