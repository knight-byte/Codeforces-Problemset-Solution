def main():
    word = input()
    x = [1 for _ in word if _.islower()]
    if len(x) >= len(word)-len(x):
        print(word.lower())
    else:
        print(word.upper())


if __name__ == '__main__':
    main()
