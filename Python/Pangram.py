def main():
    n = int(input())
    string = input().lower()
    s1 = set(string)
    if len(s1) == 26:
        print("YES")
    else:
        print("NO")


if __name__ == '__main__':
    main()
