def main():
    n = int(input())
    arr = [int(input()) for i in range(n)]
    sol = [0 for i in range(n)]
    for i in range(n):
        sol[arr[i]-1] = i+1
    for i in sol:
        print(i, end=" ")
    print()


if __name__ == '__main__':
    main()
