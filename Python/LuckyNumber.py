def main():
    num = int(input())
    number = str(num)
    counter = 0
    for i in range(len(number)):
        if (number[i] == '4') or (number[i] == '7'):
            counter += 1
    if counter == 4 or counter == 7:
        print("YES")
    else:
        print("NO")


if __name__ == '__main__':
    main()
