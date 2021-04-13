def main():
    up, down, dont = map(int, input().split())
    if up == down:
        print(0 if dont == 0 else "?")
    elif up > down and down+dont < up:
        print("+")
    elif up < down and dont+up < down:
        print("-")
    else:
        print("?")


if __name__ == '__main__':
    main()
