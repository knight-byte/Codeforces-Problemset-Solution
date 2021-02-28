def main():
    question = int(input())
    pos = int(input())
    marks = [int(input()) for i in range(question)]
    passedParticipants = 0
    minMarks = marks[pos-1]
    for i in marks:
        if i > 0 and i >= minMarks:
            passedParticipants += 1
    print(passedParticipants)


if __name__ == '__main__':
    main()
