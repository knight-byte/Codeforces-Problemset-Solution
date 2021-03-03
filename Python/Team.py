def main():
    questions = int(input())
    inputs = [[0 for i in range(3)] for j in range(questions)]
    for i in range(questions):
        for j in range(3):
            inputs[i][j] = int(input())
    memberCount = 0
    questionCount = 0
    for i in range(questions):
        memberCount = 0
        for j in range(3):
            if inputs[i][j] == 1:
                memberCount += 1
        if memberCount >= 2:
            questionCount += 1
    print(questionCount)


if __name__ == '__main__':
    main()
