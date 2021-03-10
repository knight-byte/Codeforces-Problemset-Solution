def main():
    totLevel = int(input())
    x = int(input())
    arrX = [int(input()) for i in range(x)]
    y = int(input())
    arrY = [int(input()) for i in range(y)]
    s1 = set(arrX+arrY)
    if len(s1) == totLevel:
        print("I become the guy.")
    else:
        print("Oh, my keyboard!")


if __name__ == '__main__':
    main()
