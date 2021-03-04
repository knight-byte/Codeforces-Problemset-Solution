def main():
    word = input()
    newWord = ""
    cap, small = 0, 0
    for i in word:
        if i.isupper():
            cap += 1
        else:
            small += 1
    if cap > small:
        newWord = word.upper()
    else:
        newWord = word.lower()
    print(newWord)


if __name__ == '__main__':
    main()
