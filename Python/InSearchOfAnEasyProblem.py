def main():
    n = int(input())
    vote = input().count("1")
    print("HARD" if vote > 0 else "EASY")


if __name__ == '__main__':
    main()
