def main():
    n = int(input())
    x = int(input())
    iceCream = x
    kids = 0
    for i in range(n):
        sign = input()
        ic = int(input())
        if sign == "x":
            iceCream += ic
        elif sign == '-' and iceCream >= ic:
            iceCream -= ic
        elif sign == '-' and iceCream < ic:
            kids += 1
    print(f"{iceCream} {kids}")


if __name__ == '__main__':
    main()
