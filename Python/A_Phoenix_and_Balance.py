def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = [2**i for i in range(1, n+1)]
        if n > 3:
            print(abs((sum(arr[:(n//2)-1])+arr[-1]) - sum(arr[(n//2)-1:-1])))
        else:
            print(2)


if __name__ == '__main__':
    main()
