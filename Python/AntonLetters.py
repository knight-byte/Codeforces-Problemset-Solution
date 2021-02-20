def main():
    str1 = input()
    panda = set()
    for i in range(len(str1)):
        if str1[i].isalpha():
            panda.add(str1)
    print(len(panda))


if __name__ == "__main__":
    main()
