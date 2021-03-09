def main():
    y = int(input())
    w = int(input())
    res = max(y, w)
    num = (6-res)+1
    if num == 1:
        print(f"{num}/6")
    elif num == 2:
        print(f"1/3")
    elif num == 3:
        print(f"1/2")
    elif num == 4:
        print(f"2/3")
    elif num == 5:
        print(f"5/6")
    elif num == 6:
        print(f"1/1")


if __name__ == '__main__':
    main()
