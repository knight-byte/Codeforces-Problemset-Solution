def main():
    wordCount = int(input())
    word = ""
    wordsArray = []
    for i in range(wordCount):
        word = input()
        if len(word) > 10:
            tempWord = ""
            temp = len(word)-2
            wordLength = str(temp)
            tempWord += word[0]
            tempWord += str(wordLength)
            tempWord += word[-1]
            wordsArray.append(tempWord)
        else:
            wordsArray.append(word)
    for i in wordsArray:
        print(i)


if __name__ == '__main__':
    main()
