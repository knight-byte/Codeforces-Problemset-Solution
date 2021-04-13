def main():
    # rank = {"2": 1, "3": 2, "4": 3, "5": 4, "6": 5, "7": 6,
    #         "8": 7, "9": 8, "T": 9, "J": 10, "Q": 11, "K": 12, "A": 13}
    table = input()
    cards = input().split()
    for i in cards:
        if table[0] == i[0] or table[1] == i[1]:
            print("YES")
            break
    else:
        print("NO")


if __name__ == '__main__':
    main()
