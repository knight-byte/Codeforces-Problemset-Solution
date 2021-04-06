def main():
    word = input().lower()
    extra = ["h", "e", "l", "l", "o"]
    for i in word:
        if len(extra) == 0:
            break
        elif i == extra[0]:
            extra.pop(0)
    print("YES" if len(extra) == 0 else "NO")


if __name__ == '__main__':
    main()
