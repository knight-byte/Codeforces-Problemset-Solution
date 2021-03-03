def main():
    num = int(input())
    s1 = input()
    cons = s1[0]
    result = 0
    for i in s1:
        if i == cons:
            result += 1
        else:
            cons = i
    print(result-1)


if __name__ == '__main__':
    main()
