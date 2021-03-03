def main():
    t = int(input())
    while t:
        n = int(input())
        s = input()
        ans = "".join([s[i] for i in range(0, 2*n-1, 2)])
        print(ans)
        t -= 1


if __name__ == '__main__':
    main()
