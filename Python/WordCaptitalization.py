def main():
    word = input()
    print(f"{word[0].upper()}{word[1:] if len(word)>1 else ''}")


if __name__ == '__main__':
    main()
