def main():
    num1 = input()
    num2 = input()
    res = ""
    for i in range(len(num1)):
        if num1[i] == num2[i]:
            res += '0'
        else:
            res += "1"
    print(res)


if __name__ == '__main__':
    main()
