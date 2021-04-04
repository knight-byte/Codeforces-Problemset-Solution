def main():
    word = input().lower()
    word_rev = input().lower()
    print("YES" if word == word_rev[::-1] else "NO")


if __name__ == '__main__':
    main()
