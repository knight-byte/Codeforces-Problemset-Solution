def main():
    t = int(input())
    while t:
        t -= 1
        n = int(input())
        a = [int(input()) for i in range(n)]
        total = 0
        for i in a:
            total += i
        temp = total/n
        if total % n == 0:
            print(total/n)
        else:
            while n*temp < total:
                temp += 1
            print(temp)


if __name__ == '__main__':
    main()
