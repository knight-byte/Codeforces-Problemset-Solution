def main():
    n = int(input())
    k = int(input())
    total = 0
    while (n):
        temp = int(input())
        if 5-temp >= k:
            total += 1
        n -= 1
    print(total/3)


if __name__ == "__main__":
    main()
