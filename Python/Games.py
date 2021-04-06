def main():
    n = int(input())
    home = []
    guest = []
    for _ in range(n):
        x, y = map(int, input().split())
        home.append(x)
        guest.append(y)
    cnt = 0
    for i in home:
        cnt += guest.count(i)
    print(cnt)


if __name__ == "__main__":
    main()
