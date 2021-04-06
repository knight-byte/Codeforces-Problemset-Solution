def main():
    n, k = map(int, input().split())
    ques = [5*i for i in range(1, n+1)]
    # print(ques)
    left = 240-k
    q = 1
    while sum(ques[:q]) <= left and q <= n:
        q += 1

    print(q-1)


if __name__ == '__main__':
    main()
