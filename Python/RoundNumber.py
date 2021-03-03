def main():
    t = int(input())
    while t:
        n = int(input())
        arr = []
        power = 1
        while n:
            if n % 10:
                arr.append(n % 10*power)
            n /= 10
            power *= 10
        print(len(arr))
        for i in arr:
            print(i, end=" ")
        print()
        t -= 1


if __name__ == '__main__':
    main()
