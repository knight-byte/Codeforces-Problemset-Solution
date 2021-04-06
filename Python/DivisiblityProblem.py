def main():
    t = int(input())
    for _ in range(t):
        a, b = map(int, input().split())
        if a % b == 0:
            print(a % b)
        elif a < b:
            print(b-a)
        elif a > b:
            print(b-(a % b))


if __name__ == "__main__":
    main()
