def main():
    match = int(input())
    score = input().upper()
    ans = score.count("D")
    if ans == match-ans:
        print("Friendship")
    elif ans > match-ans:
        print("Danik")
    else:
        print("Anton")


if __name__ == '__main__':
    main()
