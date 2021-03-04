def main():
    n = int(input())
    height = int(input())
    people = [int(input()) for i in range(n)]
    counter = 0
    for i in people:
        if i > height:
            counter += 1
    res = ((n-counter)*1) + (counter*2)
    print(res)


if __name__ == '__main__':
    main()
