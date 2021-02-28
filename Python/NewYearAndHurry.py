from typing import Counter


def main():
    question = int(input())
    time = int(input())
    remainingTime = 240
    totalTime = time
    counter = 0
    for i in range(question):
        if totalTime < remainingTime:
            totalTime += 5*(i+1)
            counter += 1
            if totalTime > remainingTime:
                counter -= 1
    print(counter)


if __name__ == '__main__':
    main()
