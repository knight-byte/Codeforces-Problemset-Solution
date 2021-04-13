def main():
    n = int(input())
    arr = list(map(int, input().split()))
    ser1 = []
    ser2 = []
    for i in arr:
        if i == 1 or i == 3:
            ser1.append(1)
        elif i == 2:
            ser2.append(1)
    print(sum(ser1))


if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        main()
