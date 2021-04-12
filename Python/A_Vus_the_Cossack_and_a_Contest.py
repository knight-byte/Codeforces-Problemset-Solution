def main():
    n, m, k = map(int, input().split())
    if m//n > 0 and k//n > 0:
        print("Yes")
    else:
        print("No")


if __name__ == '__main__':
    main()
