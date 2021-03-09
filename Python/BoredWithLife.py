def main():
    a = int(input())
    b = int(input())
    ans = 1
    for i in range(min(a, b)):
        ans *= i
    print(ans)


if __name__ == '__main__':
    main()
