def main():
    games = int(input())
    result = input()
    anton, danik = 0, 0
    for i in range(games):
        if result[i] == 'A':
            anton += 1
        elif result == 'D':
            danik += 1
    if anton > danik:
        print("Anton\n")
    elif anton < danik:
        print("Danik\n")
    elif anton == danik:
        print("Friendship\n")


if __name__ == "__main__":
    main()
