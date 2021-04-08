def main():
    t = int(input())
    for _ in range(t):
        n = input()
        total = (4*(int(n[0])-1) + len(n))
        arr = [(i % 4)+1 for i in range(total)]
        print(sum(arr))


if __name__ == '__main__':
    main()
