def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))
        o_cnt = 0
        e_cnt = 0
        for i in range(n):
            if i % 2 != 0 and arr[i] % 2 == 0:
                e_cnt += 1
            elif i % 2 == 0 and arr[i] % 2 != 0:
                o_cnt += 1
        if e_cnt == o_cnt:
            print(e_cnt)
        else:
            print(-1)


if __name__ == '__main__':
    main()
