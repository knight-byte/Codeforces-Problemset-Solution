def main():
    myCard = input()
    deck = [input() for i in range(5)]
    state = False
    for i in range(len(deck)):
        if myCard[0] == deck[i][0] or myCard[1] == deck[i][1]:
            state = True
            break
    if state:
        print("YES")
    else:
        print("NO")


if __name__ == "__main__":
    main()
